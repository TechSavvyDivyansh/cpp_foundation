#include <iostream>

using namespace std;
void area(int ra);
void circ(int ra);

int main()
{
    int r;float p=3.14,ar;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    area(r);
    circ(r);
}
void area(int ra)
{
    double ar;
    ar=3.14*ra*ra;
    cout<<"area of the circle is:"<<ar<<endl;
}
void circ(int ra)
{
   double circ=2*3.14*ra;
   cout<<"Circumference of circle:"<<circ<<endl;
}
