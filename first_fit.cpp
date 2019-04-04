#include<bits/stdc++.h>
using namespace std;
#define max 10
class FirstFit
{
	public:
		int n,arr[max],mem[5]={10,70,80,50,60},count=0;
		void getdata()
		{
			cout<<"Enter number of processes"<<endl;
			cin>>n;
			cout<<"Enter the size of processes"<<endl;
			for(int i=0;i<n;i++)
			cin>>arr[i];
			mem[-1]=0;
		}
		void calculation()
		{
			
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<5;j++)
				{
					
					if(arr[i]<=mem[j])
					{
						for(int k=0;k<i;k++)
						count=mem[k-1]+mem[k];
						cout<<"Address of process in memory "<<i+1<<":"<<count<<endl;
						break;	
					}
				if((j==4) && (arr[i]>mem[j]))	
				cout<<"Memory not allocate to process"<<i+1<<endl;	
				}	
				
			}
		}
};
int main()
{
	FirstFit obj;
	obj.getdata();
	obj.calculation();
}
