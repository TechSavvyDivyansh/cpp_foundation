#include <iostream>

using namespace std;

int main()
{
    cout<<"enter a number to print the multiplication table"<<endl;
    int a,i;
    cin>>a;
    for(i=0;i<=10;i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
}
