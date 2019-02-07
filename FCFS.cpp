//NON PREEMPTIVE FCFS
#include<iostream>
using namespace std;
#define max 10
class process
{
	public:
		void getdata();
		void time_calculation();
	    int n;
	    double a[max],et[max],ct,tat,wt,average_tat,average_wt,sum_tat,sum_wt;
};
void process::getdata()
{
	cout<<"Enter the number of processes"<<endl;
	cin>>n;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Enter the arrival time"<<endl;
	for(int i=0;i<n;i++)       cin>>a[i];
	cout<<"--------------------------------------------"<<endl;
	cout<<"Enter the execution time"<<endl;	
	for(int i=0;i<n;i++)       cin>>et[i];	
	cout<<"--------------------------------------------"<<endl;
}
void process::time_calculation()
	{
		for(int i=0;i<n;i++)
		{
			if(ct>a[i])
			{
			ct+=et[i];
			tat=ct-a[i];
			wt=tat-et[i];
			cout<<"Completion time is  : "<< ct<<endl;
			cout<<"Turn around time is : "<< tat<<endl;
			cout<<"Waiting time is     : "<< wt<<endl<<endl<<endl;
			cout<<"--------------------------------------------"<<endl;		
		    }
		else{
			ct=a[i]+et[i];
			tat=ct-a[i];
			wt=tat-et[i];
			cout<<"Completion time is  : "<< ct<<endl;
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
int main()
{
	process p;
	p.getdata();
	p.time_calculation();
}
