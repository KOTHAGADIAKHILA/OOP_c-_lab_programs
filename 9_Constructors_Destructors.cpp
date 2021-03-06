/****Program to demonstrate Constructors  Destructors***/
#include<iostream>
using namespace std;

class sample
{
    public:
    int x,y;
    int X,Y;
    sample()
    {
        cout<<" Default constructor is invoked"<<endl;
    }
    sample(int a,int b)
    {
        cout<<"Parameterised constructor is invoked"<<endl;
        x=a;
        y=b;
        cout<<"x = "<<x<<" y = "<<y<<" x+y = "<<x+y<<endl;
    }
    sample(const sample &obj)
    {
        cout<<"Copy constructor is invoked"<<endl;
        X = obj.x;
        Y = obj.y;
        cout<<"X = "<<X<<" Y = "<<Y<<" X+Y = "<<X+Y<<endl;
    }
    ~sample()
    {
        printf("Destructor is called\n");
    }
};
int main()
{
    sample obj;
    sample obj1(10,20);
    sample obj2(25,35);
    sample obj3(obj1);
}

