//Write a C++ Program to illustrate early binding.
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Early Binding"<<endl;
        cout<<"In Base Class"<<endl;
    }
};
class derived:public Base
{
    public:
    void display()
    {
        cout<<"In Derived Class"<<endl;
    }
    
};

int main()
{
    Base *bp;
    bp = new derived;
    bp->display();
    /* The Function call is decided at Compile time (Compiler sees type of pointer as it is of base class) and then calls  base class display method
    return 0;*/
}



