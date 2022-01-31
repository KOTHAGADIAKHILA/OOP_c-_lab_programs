/*Program on Stack Unwinding*/
#include<iostream>
using namespace std;
void func1()
{
    cout<<"\n func1() start"<<endl;
    throw 100;
    cout<<"\n func1() end"<<endl;
}

void func2()
{
    cout<<"\n func2() start"<<endl;
    func1();
    cout<<"\n func2() end"<<endl;
}
void func3() 
{
    cout<<"\n func3() start"<<endl;
    try
    {
        func2();
    }
    catch(int i)
    {
        cout<<" Caught Exception in func 3  "<<i<<endl;
    }
    cout<<"\n func3() end";
}
int main()
{
    func3();
    return 0;
}
    

