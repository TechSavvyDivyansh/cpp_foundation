#include<iostream>
using namespace std;
class A
{
    public:int a=10;
};
class B:virtual public A
{
     public:int b=5;
};
class C:virtual public B
{
      public:int c=1;
};
class D:public C
{
     public:int d=2;
     public:void display()
     {
          cout<<"a:"<<a<<endl;
          cout<<"b:"<<b<<endl;
          cout<<"c:"<<c<<endl;
          cout<<"d:"<<d<<endl;
     }     //     :)     This or
};
int main()
{
     D obj;
     obj.display();
     /*cout<<obj.a<<endl;
     cout<<obj.b<<endl;
     cout<<obj.c<<endl;
     cout<<obj.d<<endl; */  //:) continue:  This
 }
