#include <iostream>

using namespace std;


class Constructor
{
      int data;
      public:
             Constructor()
             {
                cout<<"This is a default constructor:"<<endl;
             }
             Constructor(int a)
             {
                 cout<<"This is a parameterized constructor\n";
                 data=a;
                 cout<<"Data is:"<<data<<endl;
             }
             Constructor(Constructor &obj)
             {
                  data=obj.data;
                  cout<<"This is a copy constructor"<<endl;

             }

};
int main()
{
    Constructor obj;
    Constructor obj1(10);
    Constructor obj2=obj1;
}

