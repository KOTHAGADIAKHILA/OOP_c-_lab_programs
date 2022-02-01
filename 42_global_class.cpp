#include<iostream>
using namespace std;
class global
{
	public:
		int add(int x,int y)
		{
		cout<<"Global class "<<endl;
		cout<<"x = "<<x<<",   y = "<<y<<endl;
		cout<<"result x + y = "<<x+y<<endl;
	    }

};
int main()
{
	global obj;
	obj.add(5,10);
	
}

