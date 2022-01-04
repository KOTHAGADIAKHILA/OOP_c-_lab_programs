/***Write a C++ program to allocate memory using new operator***/
#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b;
	void getmyvalues()
	{
		cout<<"Enter any two integers"<<endl;
		cin>>a>>b;
	}
	void add()
	{
		cout<<"a = "<<a<<" b = "<<b<<" a+b = "<<a+b<<endl;
    }
};
int main()
{
	sample *object;
	object = new sample;
	cout<<"Allocating memory using new operator"<<endl;
	object->getmyvalues();
	object->add();
	delete object; 
}
