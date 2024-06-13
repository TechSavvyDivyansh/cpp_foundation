#include <iostream>

using namespace std;
class Complex
{
     int r,i;
     public:
           Complex()
           {
               r=i=0;
           }
           void get();
           void display();
           Complex operator +(Complex);
};
void Complex::get()
{
      cout<<"Enter real part"<<endl;
      cin>>r;
      cout<<"Imaginary part"<<endl;
      cin>>i;
}
void Complex::display()
{
   cout<<"\n";
   cout<<r<<" +i"<<i;
}
Complex Complex:: operator +(Complex c4)
{
    Complex s;
    s.r=r+c4.r;
    s.i=i+c4.i;
}
int main()
{
   Complex c1,c2,c3;
   c1.get();
   c2.get();
   c3=c1+c2;
   c3.display();

}
