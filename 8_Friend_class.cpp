/******Write a C++ program on Friend Class *****/
#include<iostream>
using namespace std;
class sampleA
{
    private:
    int a,b;
    public:
     void initialize()
     { 
         a = 10;
         b = 20;
     }
     friend class sampleB;
};

class sampleB
{
    public:
    void display(sampleA &x)
    {
        printf("Using friend class accesssing the private members  a b of class sampleA");
        cout<<"\n a is "<<x.a;
        cout<<"\n b is "<<x.b;
    }
};

int main()
{
    sampleA objA;
    sampleB objB;
    objA.initialize();
    objB.display(objA);
    return 0;
}


