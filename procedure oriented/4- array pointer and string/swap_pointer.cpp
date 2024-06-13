#include <iostream>

using namespace std;

int swap(int*,int*);
int main()
{
    int a,b;
    cout<<"Enter two nos to be swaped:"<<endl;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    swap(&a,&b);
    cout<<"New values:"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
int swap(int *a,int *b)
{
     int c;
     c=*a;
     *a=*b;
     *b=c;
}
