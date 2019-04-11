#include<iostream>
#define m 100
using namespace std;
class Bankers
{
	public:
		int p,r,alloc[m][m],max[m][m],avail[m],need[m][m],finish[m],work[m],i,j;
		void getdata()
		{
			cout<<"Enter number of processes"<<endl;
			cin>>p; 
			cout<<"Enter number of resources"<<endl;
			cin>>r; 
			cout<<"Enter Allocation Matrix"<<endl;
			for(int i=0;i<p;i++)
			{
				for(int j=0;j<r;j++)
					cin>>alloc[i][j];
			}
			
			cout<<"Enter Max Matrix"<<endl;
			for(int i=0;i<p;i++)
			{
				for(int j=0;j<r;j++)
					cin>>max[i][j];
			}
			
			cout<<"Enter Available resources "<<endl;
			for(int j=0;j<r;j++)
				cin>>avail[j];
		}
		void bankAlgo()
		{
			
			for(int i=0;i<p;i++)
				finish[i]=0;
			
			for(int i=0;i<p;i++)
			{
				for(int j=0;j<r;j++)
				{
					need[i][j]=max[i][j]-alloc[i][j];	
				}
			} 
			int c=0;
    		for (int k=0;k<r;k++)
			{ 
        		for(int i=0;i<p;i++)
				{ 
            		if(finish[i]==0)
					{ 
                		int flag=0; 
                		for (int j=0;j<m;j++)
						{ 
                    		if(need[i][j]>avail[j]) 
                        		flag=1; 
                    		break;
						} 
                		if (flag==0)
						{ 
                			work[c++]=i; 
                			for(int y=0;y<m;y++) 
                				avail[y]+=alloc[i][y]; 
                    		finish[i]=1; 
               			} 
            		} 
        		} 
    		}	
		for(int i=0;i<p;i++)
		{
			if(finish[i]==1)
				cout<<"It is a Safe Sequence"<<endl;
			break;
			if(finish[i]==0)	
				cout<<"It is not a Safe Sequence"<<endl;
			break;	
		}			
	}
	void print_work()
	{
		cout<<"Total work matrix will be :"<<endl;
		for(int j=0;j<r;j++)
		cout<<avail[j]<<" ";
		cout<<endl;
	}
};
int main()
{
	Bankers b;
	b.getdata();
	b.bankAlgo();
	b.print_work();
	return 0;
}
