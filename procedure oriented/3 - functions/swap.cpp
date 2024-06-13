/*no change in value of and b (call by value)
#include <iostream>

using namespace std;

void swap(int ,int);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"after swap:"<<endl;
    cout<<"Value of a is:"<<a<<" and"<<endl;
    cout<<"Value of b is:"<<b<<endl;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}*/
/*in the program below value of a and b gets swapped due to the amfercent sign(&) i.e. reference which means that a nd b in main
and a and b in the function are one and the same.so any changes made in the function will reflect the main function*/
#include <iostream>

using namespace std;

void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"after swap:"<<endl;
    cout<<"Value of a is:"<<a<<" and"<<endl;
    cout<<"Value of b is:"<<b<<endl;
}
void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
