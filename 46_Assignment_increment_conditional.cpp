//Assignment operator,Increment Decrement,Conditional operator
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10,m=10,n=50;
	cout<<"a="<<a<<","<<"b="<<b<<endl;
	a+=5;//Assignment
	cout<<"After assignment a+=5 a="<<a<<endl;
	b=a++ + ++a - b++; //Increment and Decrement
	cout<<"After increment and decrement expression a= "<<a<<","<<"b= "<<b<<endl;
	cout<<"conditional operator"<<endl;
	(m<n)?cout<<"n= "<<n<<"is greater than "<<"m= "<<m:cout<<"m= "<<m<<"is greater than "<<"n= "<<n<<endl;
	//Conditional operator
		
	
}
