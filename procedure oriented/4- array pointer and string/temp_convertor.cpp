#include <iostream>

using namespace std;

int ctof();
int ftoc();
int main()
{
    float cel,f;
    cout<<"MENU"<<endl;
    cout<<"1.celcius to fahrenheit"<<endl;
    cout<<"2.Fahrenheit to celcius"<<endl;
    int k;
    cin>>k;
    switch(k)
    {
       case 1:
        ctof();
        break;
        case 2:
        ftoc();
        break;
        default:
        cout<<"Wrong choice"<<endl;
    }

}
int ctof()
{
     float cel,f;
    cout<<"Enter the temperature in celcius"<<endl;
    cin>>cel;
    f=cel*9/5+32;
    cout<<"Temperature in fahrenheit is:"<<f<<endl;
}
int ftoc()
{
    float cel,f;
    cout<<"Enter the temperature in fahrenheit"<<endl;
    cin>>f;
    cel=(f-32)*5/9;
    cout<<"The temperature in celcius is:"<<cel<<endl;
}
