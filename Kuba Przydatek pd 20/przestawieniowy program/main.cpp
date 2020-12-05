#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="MOTOR";
    int dl=s.length();
    string w="";
    int i=0, k=2;
    while(i<k)
    {
        for(int j=i;j<dl;j+=k)
        {
            w=w+s[j];
        }
        i++;
    }
    cout<<w<<endl;
    return 0;
}
