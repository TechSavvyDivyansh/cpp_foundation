#include<iostream>
using namespace std;

class A
{
      int rel;
      public:A()
      {
           rel=0;
      }
      A(int trel)
      {
          rel=trel;
      }
      void display()
      {
          cout<<"The value is:"<<rel<<endl;
      }
};
int main()
{
    int result=100;
    A obj;
    obj=result;
    cout<<"Basic-Class Conversion is:"<<endl;
    obj.display();
}
