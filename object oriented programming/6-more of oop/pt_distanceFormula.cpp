#include <iostream>
#include<math.h>
using namespace std;



class Point
{
       double x,y;
       public:
       Point()
       {
          cout<<"Enter the value of x and y\n";
          cin>>x>>y;
       }
       Point(int a,int b)
       {
          x=a;
          y=b;
       }
       double calc()
       {
             return sqrt(x*x+y*y);
         }
      void display()
       {
           cout<<"The distance between two point "<<x<<" and "<<y<<" is :"<<calc()<<endl;
       }
      ~Point()
      {
          cout<<"\n Destroyed";
      }
};

int main()
{
    Point pt,pt1(5,12);
    pt1.display();
    pt.display();
}

//Concept of constructor and destructor . Destructur and constructor should always be within class
