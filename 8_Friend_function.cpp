/***Write a program on Friend function*****/
#include<iostream>
using namespace std;
class sample
{
 public:
    int a,b;
    void get_value(void)
    {
        cout<<"Enter any two integers:\n";
        cin>>a>>b;
    }
    friend int add (void);
    
};
int add(sample obj1)
{
    int sum;
    printf("add is declared as friend function\n");
    sum = obj1.a + obj1.b;
    return sum;
}
int main()
{
    sample obj2;
    int res;
    obj2.get_value();
    res = add(obj2);
    cout<<"SUM = "<<res<<endl;
    return 0;
}


