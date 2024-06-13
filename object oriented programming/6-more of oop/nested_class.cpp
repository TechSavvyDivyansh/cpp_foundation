#include <iostream>

using namespace std;



class A
{
      private:int adata;
      public:
             void getadata()
             {
                  cout<<"Enter a number\n";
                  cin>>adata;
                  cout<<"We are in outer class and u hv entered the number as:"<<adata<<endl;
             }
             class B
             {
                    private:int bdata;
                    public:
                           void getbdata()
                           {
                                cout<<"Enter a number\n";
                                cin>>bdata;
                                cout<<"We are in inner class and u hv entered the number as:"<<bdata<<endl;
                               }
             };
             B bobj;
             void display()
             {
                 bobj.getbdata();
             }
};
int main()
{
    A aobj;
    aobj.getadata();
    aobj.display();
}
