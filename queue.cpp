#include<iostream>
using namespace std;
int queue[10],rear = -1,front = -1,size;
void insert(int val)
{
	if (rear == n-1)
	{
		cout<<"queue full";
	}
	else 
	{
		cout<<"insert elements in queue";
		cin>>val;
		rear++ ;
		queue[rear] = val;
		cout<<"the inserted elements are:"<<queue[rear];
	}
}
int main()
{
	do
	{
		cout<<"this a file";
		
	}
}
