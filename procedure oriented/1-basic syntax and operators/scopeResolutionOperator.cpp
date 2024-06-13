#include <iostream>

using namespace std;

int a=10;
int main()
{


    {
        int a=1;
       cout<<"a now"<<a<<endl;
       cout<<"a earlier"<<::a;

    }
}
