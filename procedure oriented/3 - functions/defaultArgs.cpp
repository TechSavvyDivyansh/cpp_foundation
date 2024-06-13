#include <iostream>

using namespace std;

int add(int a=1,int b=2,int c=3);
int main()
{
    add(10,20,30);
    add (10,20);
    add(10);
    add();
}
int add(int a,int b,int c)
{
    cout<<(a+b+c)<<endl;
}
