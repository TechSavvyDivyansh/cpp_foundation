#include <iostream>

using namespace std;


class A
{
     private:double n,d;
     public:A()
     {
          n=1;
          d=1;
     }
     A operator +(A);
     void get();
     void display();
};

    A A::operator +(A f5)
    {
        A r;
        r.n=(n*f5.d)+(f5.n*d);
        r.d=d*f5.d;
        return r;
    }
    void A::get()
    {
        cout<<"Enter the numerator\n";
        cin>>n;
        cout<<"Enter the denominator\n";
        cin>>d;
    }
    void A::display()
    {

        cout<<n<<"/"<<d<<endl;
    }

int main()
{
    A f1,f2,f3;
    f1.get();
    f2.get();
    f3=f1+f2;
    f3.display();

}
