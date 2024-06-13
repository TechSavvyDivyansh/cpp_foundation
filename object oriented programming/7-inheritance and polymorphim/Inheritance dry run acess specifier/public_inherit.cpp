#include<iostream>
using namespace std;
class A
{
    private:int x=10;
    public:int y=5;
    protected:int z=1;
};
class B:public A
{
     public:
     void display()
     {
       //cout<<"X:"<<x<<endl;   Comment:Cannot be called as x is private
       cout<<"Y:"<<y<<endl;
       cout<<"Z:"<<z<<endl;
     }
};
int main()
{
     B obj;
     obj.display();

}
