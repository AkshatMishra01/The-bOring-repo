#include<iostream>
using namespace std;
int main()
{
	int attend,miss,total,bunk,per,per2,per1,no_bunk,i,decre,y,x;
	cout<<"this is the attendance programme master!!\n";
	cout<<"u know what it requires,dont u now?\nfirst total attendance,then attended classes\n";
	cin>>total>>attend;
	per=(attend*100/total);
	cout<<"percentage is:\n"<<per;
	if(per>75)
	{
	cout<<"safe man ;)\n";
	per2 = ((total-1)*100)/total;
	per1 = 100-per2;
	if(per-per1<75)
	cout<<"u should not do bunk\n";
	else
	{
	cout<<"u can do a bunk\n";
	cout<<"attendance taken by one bunk="<<per1<<"\n";
	do
	{
	x=per-per1;	
	}
	while(per>=75);
	cout<<"no of posssible bunks ="<<x;
	}
	}
	if(per == 75)
	cout<<"safe bro!! but bunk not possible!!\n";
	if(per<75) 
	cout<<"sorry bro!!\n";	
	return 0;
}

