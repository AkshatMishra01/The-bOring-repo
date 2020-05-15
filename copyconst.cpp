#include<iostream>
using namespace std;
class free
{
	int a,b,c;
	public:
	free()
	{
		cout<<"default constructor\n";
	}
	free(int a,int b)
	{
		cout<<"parametrized constructor\n";
	}
	free(int a,int b)
	{
		cout<<"copy constructor\n";
	}
		
};
int main()
{
	free a1;
	free a2(3,4);
	free a3(a2);
	return 0;
}

