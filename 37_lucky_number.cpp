/*A company CEO is very curious on lucky numbers. One day he decided to know the all employees lucky numbers. A lucky number is calculate using date of birth Lucky Number: 1. Date of Birth (DDMMYYYY)- 31081988 2. Find sum of all digits of given DoB 3. Repeat step2 until the DOB turned into single digit For Example: 1. 31081988 => 3+1+0+8+1+9+8+8 2. 38 => 3+8 3. 11 => 1+1 4. 2 Please help the CEO to find the lucky numbers of given employees 

Sample Input 1:
31081988

Sample Output 1:
2*/
#include<iostream>
using namespace std;
int sum_of_digits(int num);
int main()
{
	int sum,num,dob,dig,res;
	cout<<"Enter the date of birth in the format DDMMYYYY "<<endl;
	cin>>dob;
	res=dob;
	while(res>9)
	res=sum_of_digits(res);
    cout<<"LUCKY NUMBER----"<<res<<endl;
}
    
int sum_of_digits(int num)
{
	int sum=0,dig;
     while(num!=0)
	{
		dig=num%10;
		sum+=dig;
		num=num/10;
	}
	return sum;
	
}
	



