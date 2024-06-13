#include <iostream>

using namespace std;

int main()
{
    int m[5];int i,*ptr;
    cout<<"Enter 5 numbers in a array:"<<endl;
    for(i=0;i<5;i++)
    {
         cin>>m[i];
    }
    ptr=&m[0];
    cout<<"The values of array are:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

}
