//Write a C++ program to create multilevel inheritance. (Hint: Classes A1, A2, A3)
#include<iostream>
using namespace std;
class A1
{
	public:
		int x;
		void squarex(int n)
		{
			x = n*n;
		}
		void showx()
		{
			cout<<"In Base class A1"<<endl;
			cout<<"SQUARE "<<x<<endl;
		}
};
class A2 :public A1
{
	public:
		int y;
		void squarey(int n)
		{
			y = n*n;
		}
		void showy()
		{
			cout<<"In derived 1 A2"<<endl;
			cout<<"SQUARE"<<y<<endl;
		}
};
class A3 :public A2
{
	public:
		int z;
		void squarez(int n)
		{

	              z = n*n;
		}
		void showz()

		{
			cout<<"In derived 2 A3"<<endl;
			cout<<"SQUARE "<<z<<endl;
		}
};
int main()
{
	A3 d;
	d.squarex(5);
	d.squarey(6);
	d.squarez(7);
	cout<<"------------MULTILEVEL INHERITANCE-----------"<<endl;
	d.showx();
	d.showy();
	d.showz();
	return 0;
}


