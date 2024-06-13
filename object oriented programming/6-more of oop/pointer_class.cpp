#include <iostream>

using namespace std;


class Pointern
{
      public:int n;
            void getdata()
            {
                 cout<<"Enter a number"<<endl;
                 cin>>n;
            }
            void putdata()
            {
                cout<<"The number is:"<<n<<endl;
            }
};
int main()
{
    Pointern obj;
    int *p;        //Pointer declaration
    obj.n=4;
    p=&obj.n;
    cout<<*p<<endl;
    Pointern *q;    //Pointer pointing to the class
    q=&obj;
    q->getdata();
    q->putdata();

}
