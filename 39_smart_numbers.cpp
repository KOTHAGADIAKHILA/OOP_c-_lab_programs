/*A person X is playing a Game. In the game, he has to pick a number and determine whether it is a smart number or not. A number 'N' is called a smart number if the summation of all proper divisors of n is greater than 'N'. If n is a smart number print "YES" or else print "NO". Constraints: 1?N?10000
Sample Input 1:
12

Sample Output 1:
YES*/
#include<iostream>
using namespace std;
int main()
{
	int num,i,sum=0;
	cout<<"Enter a number";
	cin>>num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
			cout<<i<<" "<<endl;
		}
	}
	if(sum>num)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}

