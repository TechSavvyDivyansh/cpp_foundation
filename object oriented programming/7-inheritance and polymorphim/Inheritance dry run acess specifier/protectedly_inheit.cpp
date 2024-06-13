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
     protected:
     void display()
     {
       //cout<<"X:"<<x<<endl;   Comment:Cannot(never)be called as x is private
       /*cout<<"Y:"<<y<<endl;
       cout<<"Z:"<<z<<endl;*/
     }
};
class C:public B
{
     public:
     void display()
     {
      cout<<"Y:"<<y<<endl;
       cout<<"Z:"<<z<<endl;
       }
};
int main()
{
     C obj;/*Cannot be inherited into main as B is protected thus showing an error but can be inherited to class C and class c can be inherited to mains as c is public*/
     obj.display();

}
