#include <iostream>

using namespace std;


class ABC
{
     private:static int data;
     public:
            static void input()//Inside the body of static functions only static variables are allowed
            {
                 data=data+1;

            }
            void output()
            {
                 cout<<"Data is:"<<data<<endl;

            }
};

  int ABC::data=10;

int main()
{
     ABC obj,obj1;
     ABC::input();
     obj.output();
     obj1.output();
}
