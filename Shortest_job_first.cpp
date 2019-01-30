//Shortest job first(Non-Preemptive)
#include<bits/stdc++.h>
using namespace std;
#define max 10
class  Process
{
	int n;
	float et[max];
	public:
	void getdata();
	void time_calculation();
};
void Process::getdata()
{
	cout<<"Enter the number of processes"<<endl;
	cin>>n;
	cout<<"Execution time of processes"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cout<<"Process "<<i+1<<" : ";
		cin>>et[i];
	}
}
void Process::time_calculation()
{

	sort(et,et+n);
	float tat=0.0,wt=0.0;
	for(int i=0;i<=n-1;i++)
	{
		tat+=et[i];
		wt=tat-et[i];
		cout<<"Execution Time   : "<<et[i]<<endl;
		cout<<"Turn Around Time : "<<tat<<endl;
		cout<<"Waiting Time     : "<<wt<<endl;
	}
	
}
main()
{
	Process obj;
	obj.getdata();
	obj.time_calculation(); 
}
