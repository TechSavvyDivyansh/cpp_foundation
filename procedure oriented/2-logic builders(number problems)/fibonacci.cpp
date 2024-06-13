#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the value till the fibonicci is to be printed"<<endl;
    int k=3,n,a=0,b=1,c;
    cin>>n;
    cout<<"Fibonicci:"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    do
    {
       c=a+b;
       cout<<c<<endl;
       a=b;
       b=c;
       k++;
    }while(k<=n);
}
