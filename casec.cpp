#include<iostream>
using namespace std;
class switched
{
	public:
	int calculator()
	{
		int a,b,n,x;
		float c;
		cout<<"enter the 2 numbers";
		cin>>a>>b;
		while(1)
	{
		cout<<"enter your choice";
		cin>>n;
		switch(n)
		{
			case 1:
				{
					c=a+b;
					cout<<"add="<<c<<"\n";	
				}break;
			case 2:
				{
					c=a-b;
					cout<<"sub="<<c<<"\n";
				}break;
			case 3:
				{
					c=a*b;
					cout<<"multiply="<<c<<"\n";
				}break;
			case 4:
				{
					c=a/b;
					cout<<"division="<<c<<"\n";
				}break;
			case 5:
				{
					exit(6);
				}
		}
	}
	}
};
int main()
{
	switched sw;
	sw.calculator();
	return 0;
}
