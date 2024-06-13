#include <iostream>

using namespace std;
class B;
class A
{
    int data;
    public:A(){data=100;}
    friend int f(A,B);
};
class B
{
   int data;
   public:B(){data=50;}
   friend int f(A,B);
};
int f(A aobj,B bobj)
{
     return(aobj.data+bobj.data);
}

int main()
{
    A obj1;
    B obj2;
    cout<<f(obj1,obj2);
}
