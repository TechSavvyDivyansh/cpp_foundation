#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
       cout<<"We are in base class"<<endl;
       }
    ~Base()
    {
         cout<<"We hv destroyed the base class"<<endl;
    }
};
class Derived1:public Base
{
   public:
    Derived1()
    {
         cout<<"We are in Derived1"<<endl;

    }
    ~Derived1()
    {
         cout<<"We have destroyed the derived1 class"<<endl;
    }
};
class Derived2:public Derived1
{
      public:
      Derived2()
      {
         cout<<"We are in derived2 class"<<endl;
      }
      ~Derived2()
      {
          cout<<"We have destroyed the derived2 class"<<endl;
      }
};
int main()
{
    Derived2 obj;
}
