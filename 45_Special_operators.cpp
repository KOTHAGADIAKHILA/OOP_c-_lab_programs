//SPECIAL OPERATORS
#include<iostream>
using namespace std;
int main()
{
	int x,y,*p,a=10,res;
	p=&a;//Address operator
	cout<<"*p="<<*p<<endl;//Pointer operator;
	cout<<"sizeof variable integer a is= "<<sizeof(a)<<endl;//sizeof operator
	res=(x=10,y=20,x+y);
	cout<<"(x=10,y=20,x+y)="<<res<<endl;//Comma operator
}
