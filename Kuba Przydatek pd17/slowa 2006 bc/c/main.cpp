#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("dane.txt");
    string slowo;
    string odwrocone;
    int dl;
    int ile=0;
    for(int i=0;i<1000;i++)
    {
        odwrocone="";
        dane>>slowo;
        dl=slowo.length();
        for(int j=0;j<dl;j++)
        {
            odwrocone=odwrocone+slowo[dl-j-1];
        }
        if(odwrocone==slowo)
        {
            ile++;
        }
    }
    cout<<"Palindromow: "<<ile<<endl;
    return 0;
}
