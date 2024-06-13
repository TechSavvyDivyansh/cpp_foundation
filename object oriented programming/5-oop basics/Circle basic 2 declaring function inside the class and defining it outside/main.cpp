#include <iostream>

using namespace std;

//defined inside the class
class Circle
{
     private:int r;
     double ar,circ;
     public:
         void getdata();
         void calc();
         void display();

};


            void Circle::getdata()
            {
                 cout<<"Enter the radius of the circle"<<endl;
                 cin>>r;
            }
            void Circle::calc()
            {
                ar=3.14*r*r;
                circ=2*3.14*r;
            }
            void Circle::display()
            {
                 cout<<"Area ofthe circle is:"<<ar<<endl;
                 cout<<"Circumference of the circle is:"<<circ<<endl;
            }
int main()
{
    Circle obj;
    obj.getdata();
    obj.calc();
    obj.display();

}
