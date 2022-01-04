/***Write a C++ Program to display Names, Roll No., and grades of 3 students who have
appeared in the examination. Declare the class of name, Roll No. and grade. Create an
array of class objects. Read and display the contents of the array.***/
#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
		char grade[5];
	
	void read_info()
	{

		cout<<"Name ";
		cin>>name;

		cout<<"Rollno ";
		cin>>roll_no;
		
		cout<<"Grade ";
		cin>>grade;
	}
	void display_info()
	{
		cout<<"Name      :"<<name<<endl;
		cout<<"Roll_no   :"<<roll_no<<endl;
		cout<<"Grade     :"<<grade<<endl;
	}

};
int main()
{
	student s[3];
	int i,n;
	cout<<"Enter the number of students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cout<<"Enter the information of student "<<i+1<<endl;
		s[i].read_info();
	}
	cout<<"-------------------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Student "<<i+1<<endl;
		s[i].display_info();
	}
	return 0;
}



