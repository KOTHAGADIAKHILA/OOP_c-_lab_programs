// Write a c++program showing single level inheritance
#include<iostream>
using namespace std;
class base
{
	public:
	int num1;
	int num2;
	void set_value_b(int a,int b)
	{
		num1 = a;
		num2 = b;
		cout<<"In Base class"<<endl;
	}
	void show()
	{
		cout<<" num1 = "<<num1<<"num2 = "<<num2<<endl;
	}
};
class derived :public base
{
	public:
	int a,b;
	void set_value_d(int m,int n)
	{
		a = m;
		b = n;
		cout<<"In Derived class"<<endl;
	}
};

int main()
{
	base b;
	derived d;
	cout<<"Accessing base class member function with derived class object"<<endl;
        b.set_value_b(20,89);
	d.set_value_d(30,40);
	d.set_value_b(17,18);
	cout<<"show function using base class object"<<endl;
	b.show();
	cout<<"show function using derived class object"<<endl;
	d.show();
	return 0;
}
