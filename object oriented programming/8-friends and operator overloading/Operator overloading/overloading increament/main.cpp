#include <iostream>

using namespace std;

class ABC
{
     int n;
     public:
     void get();
     void display();
     void operator ++();
};
    void ABC::get()
    {
         cout<<"Enter the value of n \n";
         cin>>n;
    }
    void ABC::display()
    {
          cout<<"The value of n is:"<<n<<endl;
    }
    void ABC::operator ++()
    {
        n=++n;
    }
int main()
{
     ABC obj;
     obj.get();
     cout<<"Value of n before overloading\n";
     obj.display();
     ++obj;
     cout<<"Value of n after overloading\n";
     obj.display();
}
