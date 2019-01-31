//Round Robin
#include<iostream>
using namespace std;
#define max 10
class process
{
	public:
    int n,q,timer=0;
    float bt[max],rbt[max],wt[max],tat[max];
	void getdata();	
	void time_cal();
	void show();
};
void process::getdata()
{
	cout<<"Enter number of process"<<endl;
	cin>>n;
	cout<<"Enter the value of quantum"<<endl;
	cin>>q;
	cout<<"Enter the burst time"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cout<<"Process "<<i+1<<" : "<<endl;
	   cin>>bt[i];
	   rbt[i]=bt[i];
    }
}
void process::time_cal()
{
	while(1)
	{
		int flag=1;
		for(int i=0;i<=n-1;i++)
		{
			if(rbt[i]>0)
			{
				flag=0;
				if(rbt[i]>q)
				{
					timer=timer+q;
					rbt[i]=rbt[i]-q;
				}
				else
				{
					timer=timer+rbt[i];
					wt[i]=timer-bt[i];
					rbt[i]=0;
					tat[i]=timer;
				}
			}
			
		}
		if(flag==1)break;
	}
}
void process::show()
{
	cout<<"Turn around time is : "<<endl;
	for(int i=0;i<=n-1;i++)
	{
	 cout<<"Processes : "<<i+1<<" : "<<tat[i]<<endl;
    }
    cout<<"Waiting time is : "<<endl;
	for(int i=0;i<=n-1;i++)
	{
	 cout<<"Processes : "<<i+1<<" : "<<wt[i]<<endl;
    }
}
main()
{
	process p;
	p.getdata();
	p.time_cal();
	p.show();
}
