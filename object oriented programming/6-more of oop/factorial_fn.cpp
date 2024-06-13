#include <iostream>

using namespace std;



class Factorial
{
    int i,fact=1,n;
    public:void input();
           void calc();
           void display();
};

      void Factorial::input()
      {
          cout<<"Enter the value for printing factoral nos."<<endl;
          cin>>n;
      }
      void Factorial::calc()
      {
           for(i=1;i<=n;i++)
           {
               fact=fact*i;
           }
      }
      void Factorial::display()
      {
          cout<<"Factorial is:"<<fact<<endl;
      }
int main()
{
    Factorial fact;
    fact.input();
    fact.calc();
    fact.display();

}
