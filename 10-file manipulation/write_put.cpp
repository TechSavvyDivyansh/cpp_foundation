#include<fstream>
using namespace std;
int main()
{
    ofstream f1("Test.txt");
    char c='A';
    f1.put(c);
}
