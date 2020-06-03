#include<iostream>
using namespace std;
struct information
{
	char str[50];
	int age;
	float salary;
};
void display(information);
int main()
{
	information obj;
	cout<<"Welcome to the fill up form for the IAS exam 2020"<<endl;
		cout<<"Enter the name:";
cin.get(obj.str,50);
	cout<<"Enter the age:";
	cin>>obj.age;
	cout<<"Enter the salary";
	cin>>obj.salary;
	display(obj);
	return 0;
}
void display(information obj)
{
	cout<<"The name of the person is:"<<obj.str<<endl;
	cout<<"The age of the person is:"<<obj.age<<endl;
	cout<<"The salary of the person is:"<<obj.salary<<endl;
}
