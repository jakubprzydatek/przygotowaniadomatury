#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s="###!!o";
    int dl=s.length();
    int ile=1;
    char pom=0;
    string bufor;
    string w="";
    for(int i=1;i<=dl;i++)
    {
        if(s[i]==s[i-1])
        {
            ile++;
        }
        else
        {
            pom=pom+ile+48;
            w=w+pom+s[i-1];

            pom=0;
            ile=1;
        }
    }
    cout<<w<<endl;
    return 0;
}
