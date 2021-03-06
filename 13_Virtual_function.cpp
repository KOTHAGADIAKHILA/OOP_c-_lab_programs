/*Write a C++ program to use pointer for both base and derived classes and call the member function. Use Virtual keyword.*/
 #include<iostream>
 using namespace std;
 class Base
 {
     public:
     virtual void Display()
     {
         cout<<"In Base Class"<<endl;
     }
 };
 class Derived:public Base
 {
     public:
     void Display()
     {
         cout<<"In Derived Class"<<endl;
         cout<<"Late Binding or Run Time Polymorphism"<<endl;
     }
 };
 int main()
 {
     Base *bp;
     Base *bptr;
     Derived d;
     bp = new Derived;
     bptr = &d;
     cout<<"Function call is decide at Runtime -"<<endl;
     bp->Display(); //RUN Time
     bptr->Display();
     cout<<"Function call is decided at Compile time -"<<endl;
     d.Display();//Compile time
     return 0;
 }
