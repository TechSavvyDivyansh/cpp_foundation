#include <iostream>

using namespace std;

int main()
{
    cout <<"Enter two numbers"<<endl;
    int a ,b,i,lcm,hcf;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    cout<<"HCF:"<<hcf<<endl;
    lcm=(a*b)/hcf;
    cout<<"LCM:"<<lcm<<endl;
}
