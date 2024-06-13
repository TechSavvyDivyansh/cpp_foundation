#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char line[80];
    int words=1,len,i;
    cout<<"Enter a statement"<<endl;
    cin.getline(line,80);
    len=strlen(line);
    for(i=0;i<len;i++)
    {
         if(line[i]==' ')
         {
             words++;
         }
    }
    cout<<"No. of words in the statement are:"<<words<<endl;
}
