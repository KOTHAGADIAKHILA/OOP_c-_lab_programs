#include <iostream>
using namespace std;
int sum_of_dig(int num)
{
	int rem,sum=0,temp_num;
	 temp_num=num;
        while(temp_num!=0)
        {
        rem=temp_num%10;
        sum+=rem;
        temp_num/=10;
        
        }
    return sum;
}

int main()
{
    int num,r;
    cout<<"Enter the num"<<endl;
    cin>>num;
    r=sum_of_dig(num);
    while(r>9)
    {
    r=sum_of_dig(r);
    }  
    if (r==1)
    cout<<num<<" is a Magic number"<<endl;
    else
    cout<<num<<" is not a magic number"<<endl;
}
    
