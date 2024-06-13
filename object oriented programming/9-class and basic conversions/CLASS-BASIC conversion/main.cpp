#include <iostream>

using namespace std;

class A
{
    int rel;
    public:A(){rel=0;}
    void display()
    {
        cout<<"The value is:"<<rel<<endl;
    }
    operator int()
    {
        int value=0;
        value=rel+100;
        return value;
    }
};
int main()
{
      A obj;
      obj.display();
      int result=obj;
      cout<<"CLASS to BASIC conversion is:"<<endl;
      cout<<result;
}
