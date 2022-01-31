/* Program on Exception objects (or) Catching class type exceptions.*/
#include<iostream>
#include<cstring>
using namespace std;
class dividebyzero{
    public:
    char str[40];
    int b;
    dividebyzero()
    {
        *str = 0;
        b = 0;
    }
    dividebyzero(char *s,int e)
    {
        strcpy(str,s);
        b = e;
    }
};
int main()
{
    int i,j;
    char v[35] = "denominator should not be zero";
    try
    {
        cout<<"Enter any two number:";
        cin>>i>>j;
        if(j==0)
        {
            throw dividebyzero(v,j);
        }
        else
        {
            cout<<"Division possible, result = "<<i/j;
        }
    }
    catch(dividebyzero e)
    {
        cout<<e.str<<":";
        cout<<e.b<<"\n";
    }
    return 0;
    
}
