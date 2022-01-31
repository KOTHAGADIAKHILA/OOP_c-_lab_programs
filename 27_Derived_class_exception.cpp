/*Program for handling derived class exceptions*/
#include<iostream>
using namespace std;
class Base
{

};
class Derived:public Base
{
    
};
int main()
{
    Derived objd;
    try
    {
        throw objd;
    }
    catch(Base objb)
    {
        cout<<"caught Base class Exception"<<endl;
    }
    catch(Derived d)
    {
        cout<<"caught Derived class Exception"<<endl;//this will not execute
    }
    return 0;
}

