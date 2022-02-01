//EXPRESSIONS
#include<iostream>
using namespace std;
int main()
{
	int x=2,y=4,*a,b=5,m,n,p,q;
	a=&b;
	cout<<"x= "<<x<<","<<"y="<<y<<","<<"b="<<b<<endl;

	cout<<"Constant Expression(50/5)+10= "<<(50/5)+10<<endl;
	cout<<"Integral Expression (x*y)-5="<<(x*y)-5<<endl;
	cout<<"Float Expression (x/10)+0.5="<<(x/10)+0.5<<endl;
	cout<<"Pointer Expression (*a+1)="<<(*a+1)<<endl;
	m=n=20;//chained assignment
	cout<<"chained assignment values m=n=20 m= "<<m<<","<<"n= "<<n<<endl;
	cout<<"Embedded assignment p=10+(q=90) p= "<<(p=10+(q=90))<<endl;
	b+=10;	
	cout<<"Compound assignment b+=10 b="<<b<<endl;
	
}
