/*Program handles divide by zero exception using multiple catch blocks*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of a and b"<<endl;
    cin>>a>>b;
    try
    {
        if (b == 0)
        throw b;
        else if(b<0)
        throw "denominator b cannot be negative";
        else
        cout<<"Division possible,Result = "<<a/b<<endl;
    }
    catch(int b)
    {
        cout<<"denominator b should not be zero"<<endl;
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}

