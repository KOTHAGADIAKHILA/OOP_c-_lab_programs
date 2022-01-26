//Write a C++ program on Abstract Classes
#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A()
    {
         a = 10;
         b = 20;
    }
    
    virtual void show() = 0;
    void print()
    {
    cout<<"show function declared in Base class A"<<endl;
    cout<<"A is the abstract class"<<endl;
    }
    
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Show function defined in Derived class B"<<endl;
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};
int main()
{
    A *obja;
    obja = new B;
    obja->print();
    
    obja->show();
    return 0;
}

