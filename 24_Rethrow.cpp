/*Program on Rethrowing an exception*/
#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw "throwed  Exception";
        }
        catch(const char* msg)
        {
            cout<<"Catched the "<<msg<<endl;
            cout<<"Handle partially"<<endl;
            throw;
        }
    }
    catch(const char*msg)
    {
        cout<<"Handle remaining using rethrow"<<endl;
    }
    return 0;
    
}

