#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number to be checked as Armstrong\n";
    int n;
    cin>>n;
    int num,d,s=0;
    num=n;
    do
    {
       d=n%10;
       s=s+d*d*d;
       n=n/10;

    }while(n!=0);
    if(num==s)
    cout<<"It is an armstrong number\n";
    else
    cout<<"Not an armstrong number";
}
