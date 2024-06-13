#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number to be checked as Palindrome"<<endl;
    int num,n,d,r=0;
    cin>>n;
    num=n;
    do
    {
    d=n%10;
    r=r*10+d;
    n=n/10;
    }while(n!=0);
    if(r==num)
    cout<<"Palindrome number";
    else
    cout<<"Not a palindrome number";
}
