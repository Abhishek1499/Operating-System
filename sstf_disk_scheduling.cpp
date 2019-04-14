#include<bits/stdc++.h>
using namespace std;
#define max 30
class sstf_sch
{
	public:
	int curr_head,list[max],size,i,move,temp,dist[max];
	void calculation()
	{
		cout<<"SSTF Disk Scheduling"<<endl;
		cout<<"Enter the position of the current head"<<endl;
		cin>>curr_head;
		cout<<"Enter the size of string"<<endl;
		cin>>size;
		cout<<"Enter the tracks"<<endl;
		for(int i=0;i<size;i++)
		cin>>list[i];
		for(int i=0;i<size;i++)
       dist[i]=abs(curr_head-list[i]);
       for(int i=0;i<size;i++)
       {
     	for(int j=i+1;j<size;j++)
     	 if(dist[i]>dist[j])
		  {
     	 	temp=dist[i];
     	 	dist[i]=dist[j];
     	 	dist[j]=temp;
     	 	
     	 	temp=list[i];
     	 	list[i]=list[j];
     	 	list[j]=temp;
		  }
	   } 
	   for(int i=1;i<size;i++)
	   {  
	 	  move+=abs(curr_head-list[i]);
	 	  curr_head=list[i];
	 	  cout<<"Intermediate difference between each node is :"<<move<<endl;
	   }  
	cout<<"Total seek time is:"<<move;
	}
};
int main()
{
	sstf_sch obj;
	obj.calculation();
}
