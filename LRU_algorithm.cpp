#include<bits/stdc++.h> 
using namespace std;
#define max 30 
class lru
{
	public:
		void getdata()
		{
		    int nop,nof,page[max],count=0;
		    cout<<"Enter the number of pages "<<endl;
		    cin>>nop;
		    cout<<"Enter the number of strings"<<endl;
		    for(int i=0;i<nop;i++)
		    cin>>page[i];
		    cout<<"Enter the number of frames"<<endl;
		    cin>>nof;
		    int frame[nof],frame_count[nof];
		    for(int i=0;i<nof;i++)
		    {
		    	frame[i]=-1;
		    	frame_count[i]=0;
			}
			int i=0;
			while(i<nop)
			{
				 int j=0,flag=0;
                 while(j<nof)
                 {
				    if(page[i]==frame[j])
				   {    
                      flag=1;
                      frame_count[j]=i+1;
			       }
			        j++;
			     }
			     j=0;    
            if(flag==0)
            {
             int min=0,k=0;
              while(k<nof-1)
                {
                  if(frame_count[min]>frame_count[k+1]) 
                    min=k+1;
                  k++;
                }
               frame[min]=page[i]; 
               frame_count[min]=i+1;    
               count++;           
           }
           i++; 
          }
         cout<<"Total page fault is:"<<count<<endl;
        int hit_count=nop-count;
        cout<<"Total page hits :"<<hit_count;
		 }
          
};
int main()
{
	lru obj;
	obj.getdata();
}  
