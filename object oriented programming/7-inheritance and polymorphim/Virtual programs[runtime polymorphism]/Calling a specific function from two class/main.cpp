#include <iostream>

using namespace std;

class A
{
    public:
           virtual void show()
           {
                cout<<"We are in base class"<<endl;
           }
};
class B:public A
{
       public:void show()
       {
             cout<<"We are in derived1"<<endl;
       }
};
int main()
{
     B obj;
     A*ptr;//If virtual was not there in class Base, Then the base class would have been executed as
     ptr=&obj;
     ptr->show();//THAT show() will execute which will not hv virtual
}
//will not execute the function having keyword virtual.


/*Instead of what we have written in the main we can write as:


   B obj;
   obj.show();
   obj.show1();[<-only When class A has some function and it is inherited to class B having its own function ,then it can be called directly into main from class B]
   */
