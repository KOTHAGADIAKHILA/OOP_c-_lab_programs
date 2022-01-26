//Write a C++ Program to illustrate late binding
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"In Base Class"<<endl;
    }
};
class Derived:public Base
{
    public:
    void display()
    {
        cout<<"Late Binding"<<endl;
        cout<<"In Derived Class"<<endl;
    }
};
int main()
{
    Base *bp;
    bp = new Derived;
    bp->display();
    //RUN TIME POLYMORPHISM Function call is decided at run time.
    return 0;
}




