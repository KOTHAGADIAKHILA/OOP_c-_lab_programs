//Write a c++ program using multiple inheritance
#include<iostream>
using namespace std;
class base1
{
	public:
		int x;
		void add(int a,int b)
		{
			cout<<"In Base 1"<<endl;
			cout<<a<<"+"<<b<<" = "<<a+b<<endl;
		}
};
class base2
{
	public:
		void subtract(int m,int n)
		{
			cout<<"In Base2"<<endl;
			cout<<m<<"-"<< n<<" = "<<m-n<<endl;
		}
};
class derived :public base1,public base2
{
	public:
		void multiply(int p,int q)
		{
			cout<<"In derived class"<<endl;
			cout<<p<<"*"<<q<<" = "<<p*q<<endl;
		}
};

int main()
{
	derived d;
	cout<<"--------------------MULTIPLE INHERITANCE---------------"<<endl;
	d.add(10,20);
	d.subtract(20,6);
	d.multiply(3,6);
}

