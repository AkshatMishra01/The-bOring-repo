#include<iostream>
using namespace std;
enum days {Sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
days today;
today = thursday;
cout<<"The day is"<<today;
}
/// working of enumeration in c++ 
#include<iostream>
using nmaespace std;
enum devicerating {diode=3,transistor=4.9,arduino=5,stm_Nucleo=5}device;
int main()
{
device= transistor;
  cout<<"The seleted device has the following rating"<<device;
  return 0;
}
