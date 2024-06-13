#include <iostream>

using namespace std;

class A
{
      private:int x;
      private:void display()
              {
                    cout<<"Enter the value of x"<<endl;
                    cin>>x;
                    cout<<"Sum:"<<(x+10)<<endl;
              }
              friend class B;
};
class B
{
     public:void hello()
     {
         A aobj;
         aobj.display();
     }

};
int main()
{
    B obj1;
    //A aobj;
    obj1.hello();
}
