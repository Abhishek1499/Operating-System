#include<bits/stdc++.h>
using namespace std;
#define max 30
class fcfs_sch
{
	public:
	int curr_head,list[max],size,total_head,i,num;
	void calculation()
	{
		cout<<"FCFS Disk Scheduling"<<endl;
		cout<<"Enter the position of the current head"<<endl;
		cin>>curr_head;
		cout<<"Enter the size of string"<<endl;
		cin>>size;
		cout<<"Enter the tracks"<<endl;
		for(int i=0;i<size;i++)
		cin>>list[i];
	    num=curr_head;
	    int move=0;
	    for(int i=0;i<size;i++)
	    {	
		move+=abs(num-list[i]);
		num=list[i];
		cout<<"Difference at each intermediate steps : "<<move<<endl;
	    }
         cout<<"Total head moved : "<<move;
	}
};
int main()
{
	fcfs_sch obj;
	obj.calculation();
	return 1;
}
