/***Given that an EMPLOYEE class contains following members: data members:
Employee number, Employee name, Basic, DA, IT, Net Salary and print data
members.***/
#include<iostream>
using namespace std;
class Employee
{
	public:
		int emp_no;
		string name;
		float emp_basic;
		float DA;
		float IT;
		float net_salary;
		
};
int main()
{
	Employee e;
	cout<<"Enter employee number"<<endl;
	cin>>e.emp_no;
	cout<<endl;
	
	cout<<"Enter employee name"<<endl;
	cin>>e.name;
	cout<<endl;
	
	cout<<"Enter employee basic salary"<<endl;
	cin>>e.emp_basic;
	cout<<endl;

	
	e.DA=0.52*e.emp_basic;
	
	e.IT=0.3*e.emp_basic;
	
	e.net_salary=e.emp_basic+e.DA-e.IT;
	
	cout<<"Details of          :"<<e.name<<endl;
	cout<<endl;
	cout<<"Employee number     :"<<e.emp_no<<endl;
	cout<<"Basic salary        :"<<e.emp_basic<<endl;
	cout<<"Employee DA         :"<<e.DA<<endl;
	cout<<"Income Tax          :"<<e.IT<<endl;
	cout<<"Net salary          :"<<e.net_salary<<endl;
	
	
}

