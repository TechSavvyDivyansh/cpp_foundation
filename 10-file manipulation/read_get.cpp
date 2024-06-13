#include<fstream>
#include<iostream>
using namespace std;
int main()
{
     char buff[80];
     ifstream f1("Test.txt");
     while(f1)
     {
         f1.get(buff,80);
         cout<<buff;
     }

}
