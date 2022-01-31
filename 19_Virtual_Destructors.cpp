/*******Virtual Destructors******/
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base class Constructors"<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base class Destructors"<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"Derived class Constructors"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived class Destructors"<<endl;
    }
};
int main()
{
    Base *bp;
    bp = new Derived;
    delete bp;
   
    return 0;
}

