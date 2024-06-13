#include <iostream>

using namespace std;

int main()
{
    int i,no,fact=1;
    cout<<"Enter a no.";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial:"<<fact;
}
