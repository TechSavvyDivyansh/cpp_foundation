#include <iostream>

using namespace std;

//defined inside the class
class Circle
{
     private:int r;
     double ar,circ;
     public:
            void getdata()
            {
                 cout<<"Enter the radius of the circle"<<endl;
                 cin>>r;
            }
            void calc()
            {
                ar=3.14*r*r;
                circ=2*3.14*r;
            }
            void display()
            {
                 cout<<"Area ofthe circle is:"<<ar<<endl;
                 cout<<"Circumference of the circle is:"<<circ<<endl;
            }
};

int main()
{
    Circle obj;
    obj.getdata();
    obj.calc();
    obj.display();
    //cout<<obj.ar();   comment:this will show an error as variable ar is private and cannot be accesed outside the class
}
