#include<iostream>
using namespace std;
class A
{
      int rel;
      public:
            A(){rel=0;}
            void set()
            {
                cout<<"Enter a number"<<endl;
                cin>>rel;
            }
            friend class B;
};

class B
{
    int rel1,rel2;
    public:B(){rel1=0;rel2=0;}
    B(A tobj)
    {
        rel1=tobj.rel/2;
        rel2=tobj.rel/2;
    }
    void display()
    {
        cout<<"Value of rel1 is:"<<rel1<<endl;
        cout<<"Value of rel2 is:"<<rel2<<endl;
    }
};
int main()
{
      A aobj;
      aobj.set();
      B bobj;
      bobj=aobj;
      bobj.display();
}
