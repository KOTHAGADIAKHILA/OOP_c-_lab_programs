/***Write a C++ program to declare a class. Declare pointer to class. Initialize and display the
contents of the class member.***/
#include<iostream>
using namespace std;
class pointers
{
	public:
		int a;
		float b;
		char c;
};
int main()
{
	pointers s;
	pointers *ptr;
	ptr = &s;

	cout<<"Enter integer value"<<endl;
	cin>>ptr->a;

	cout<<"Enter a floating number"<<endl;
	cin>>ptr->b;

	cout<<"Enter a character"<<endl;
	cin>>ptr->c;

	cout<<"a is "<<ptr->a<<endl;;
	cout<<"b is "<<ptr->b<<endl;
	cout<<"c is "<<ptr->c<<endl;
}

