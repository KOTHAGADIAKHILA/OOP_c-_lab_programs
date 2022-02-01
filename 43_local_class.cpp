//LOCAL CLASS
#include<iostream>
using namespace std;
int x=250;
void function()
{
	class sample
	{
		public:
			int x;
			void display ()
			{
				x=100;
				cout<<"Local class variable x ="<<x<<endl;
				cout<<"global variable x="<<::x<<endl;
			}
			
	};
	
	sample obj;
	obj.display();
}
int main()
{
	function();
	}	

