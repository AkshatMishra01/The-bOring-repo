#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> vec;
int x;
cout<< "Initial vector size =" << vec.size() <<endl ;
for(x=0;x<10;x++)
{
vec.push_back(x);
}
cout<< "After vector size =" << vec.size() << endl ;

for(x=0;x<10;x++)
{
	cout<< "The " << x <<" element is:" << vec[x] << endl;
}
cout<<"This code is also available on my remote system (repo bitches)";
}
