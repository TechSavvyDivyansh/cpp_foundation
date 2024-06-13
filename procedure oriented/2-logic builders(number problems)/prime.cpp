#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a no. to be checked as prime no."<<endl;
    int a,i,c=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c=c+1;
     }
     if(c==2 && a!=1)
     cout<<"Prime no."<<endl;
     else if(c!=2 && a!=1)
     cout<<"composite no.";
     else
     cout<<"neither prime nor composite";
}
