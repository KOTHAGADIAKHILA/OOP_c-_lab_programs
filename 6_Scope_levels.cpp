/***Write a C++ program to use scope resolution operator. Display the various values
of the same variables declared at different scope levels.***/
#include<iostream>
using namespace std;
int m = 10;
int main()
{
	int m = 20;
	{
	int k = m;
	cout<<"Inside the  block"<<endl;
	cout<<"k =  "<<k<<endl;
	cout<<"m = "<<m<<endl;
	cout<<"::m = "<<::m<<endl;
}
cout<<"\n Outside the block"<<endl;

cout<<"m = "<<m<<endl;
cout<<"::m = "<<::m<<endl;

return 0;
}


