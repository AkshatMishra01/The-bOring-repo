#include<iostream>
using namespace std;
struct database
{
double percent  79.95;
int age = 12;
};
int main()
{
database *ptr,d;
*ptr = &d;
cout<<"The percentage secured by the student is"<<(*ptr).percent<<endl;
cout<<"The age of thestudent is:"<<(*ptr).age;
return 0;
}
