#include<iostream>
using namespace std;
class fraction
{
     private:double n,d;
     public:fraction()
     {
          n=1;
          d=1;
     }
     fraction operator /(fraction);
     void get();
     void display();
};
fraction fraction::operator/(fraction f5)
{
      fraction r;
      r.n=n*f5.d;
      r.d=d*f5.n;
      return r;
}
void fraction::get()
{
     cout<<"Enter the numerator\n";
     cin>>n;
     cout<<"Enter the denominator\n";
     cin>>d;
}
void fraction::display()
{
     double r;
     r=n/d;
     cout<<n<<"/"<<d<<"="<<r<<endl;
}
int main()
{
      fraction f1,f2,f3;
      f1.get();
      f2.get();
      f3=f1/f2;
      f1.display();
      f2.display();
      f3.display();
}
