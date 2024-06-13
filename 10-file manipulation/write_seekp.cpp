#include<fstream>
using namespace std;
int main()
{
    ofstream f1("Test.txt");
    f1<<"Hii"<<endl;
    f1<<"MY NAME IS DIVYANSH"<<endl;
    f1.seekp(10);
    f1<<"*";

}
