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
     private:
     void display()
     {
       //cout<<"X:"<<x<<endl;   Comment:Cannot be called as x is private
       cout<<"Y:"<<y<<endl;
       cout<<"Z:"<<z<<endl;
     }
};
int main()
{
     B obj;/*Cannot be inherited as B is private thus showing an error*/
     obj.display();

}
