//Priority scheduling (Non-preemptive)
#include<iostream>
using namespace std;
#define max 10
class process
{ 
   public:
   	int n,pr[max],bt[max],ct;
   	float at[max],tat,wt,average_tat,average_wt,sum_tat,sum_wt;
   	void getdata()
   	{
   		cout<<"Higher priority is 3"<<endl;
   	   cout<<"Enter the number of processes"<<endl;
	   cin>>n;
	   cout<<"Enter the arrival time of processes"<<endl;
	   for(int i=0;i<=n-1;i++)
	   {
	   cout<<"Process "<<i+1<<" : ";
	   cin>>at[i];
       }
	   cout<<"Enter the burst time of processes"<<endl;
	   for(int i=0;i<=n-1;i++)
	   {
	   cout<<"Process "<<i+1<<" : ";
	   cin>>bt[i];
       }
	   cout<<"Enter the priorities of the processes"<<endl;
	   for(int i=0;i<=n-1;i++)
	   {
	   	cout<<"Process "<<i+1<<" : ";
	    cin>>pr[i];
	   } 	  	
	}
	void time_calculation()
	{
		int temp;
		for (int i=0; i<=n-1;i++) 
		{
      for (int j=i+1;j<=n-1;j++) 
	  {
         if (pr[i] > pr[j]) 
		 {
            temp = pr[j];
            pr[j] = pr[i];
            pr[i] = temp;
            
			temp = bt[j];
            bt[j] = bt[i];
            bt[i] = temp;
            
            for(int i=0;i<n;i++)
		{
			if(ct>at[i])
			{
			ct+=bt[i];
			tat=ct-at[i];
			wt=tat-bt[i];
			cout<<"Process "<<i+1 <<" : "<<endl;
			cout<<"Turn around time is : "<< tat<<endl;
			cout<<"Waiting time is     : "<< wt<<endl<<endl<<endl;
			cout<<"--------------------------------------------"<<endl;		
		    }
		else
		{
			ct=at[i]+bt[i];
			tat=ct-at[i];
			wt=tat-bt[i];
			cout<<"Process "<<i+1 <<" : "<<endl;
			cout<<"Turn around time is : "<< tat<<endl;
			cout<<"Waiting time is     : "<< wt<<endl<<endl<<endl;	
			cout<<"--------------------------------------------"<<endl;		
		}
		sum_tat+=tat;
		sum_wt+=wt;
	}
	average_tat=sum_tat/n;
	average_wt=sum_wt/n;
	cout<<"Average turn around time : "<< average_tat<<endl;
	cout<<"Average waiting time     : "<< average_wt<<endl;
         }
      }
   }
	}	
};
int main()
{
	process p;
	p.getdata();
	p.time_calculation();
}
