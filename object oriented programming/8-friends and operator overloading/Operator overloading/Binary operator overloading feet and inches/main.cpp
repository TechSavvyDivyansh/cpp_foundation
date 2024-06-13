#include <iostream>

using namespace std;


class Height
{
     int f,i;
     public:Height()
     {
         f=1;
         i=1;
     }
     Height operator +(Height);
     void get();
     void display();
};

   Height Height::operator +(Height f5)
   {
       Height r;
       r.f=f+f5.f;
       r.i=i+f5.i;
       if(r.i>=12)
       {
          r.f=r.f+1;
          r.i=r.i-12;
       }
       return r;
   }
   void Height::get()
   {
     cout<<"Enter the height in feet\n";
     cin>>f;
     cout<<"Enter the height in inches\n";
     cin>>i;
   }
   void Height::display()
   {
      cout<<"Final height:"<<f<<"feet and "<<i<<" inches ."<<endl;
   }
int main()
{
    Height f1,f2,f3;
    f1.get();
    f2.get();
    f3=f1+f2;
    f3.display();
}
