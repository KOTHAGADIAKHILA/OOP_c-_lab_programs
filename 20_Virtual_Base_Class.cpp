/********Virtual Base Class*******/
#include<iostream>
using namespace std;
class Base
{
    public:
    int a;
    void show()
    {
        cout<<"In Base Class"<<endl;
    }
};
class Derived1:public virtual Base
{
    public:
    int b;
    void show()
    {
        cout<<"In Derived1 Class"<<endl;
    }
};
class Derived2:public virtual Base
{
    public:
    int c;
    void show()
    {
        cout<<"In Derived2 Class"<<endl;
    }
};
class Derived:public Derived1,public Derived2
{
    public:
    int d;
    Derived()
    {
        a=1,b=2,c=3,d=4;
    }
    void show()
    {
        cout<<"In Derived Class"<<endl;
        cout<<"Values of a,b,c,d"<<endl;
        cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
        cout<<"a+b+c+d = "<<a+b+c+d<<endl;
    }
    
};
int main()
{
    Base *bp;
    Derived d;
    bp = &d;
    bp->show();
    d.show();
    return 0;
}
