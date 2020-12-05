#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int licznik_slow=0;
    int ile_liter[26]={0};
    ifstream tekst("tekst.txt");
    string w;
    int dl;
    for(int i=0;i<1876;i++)
    {
        tekst>>w;
        dl=w.length();
        licznik_slow+=dl;
        for(int j=0;j<dl;j++)
        {
            ile_liter[w[j]-65]++;
        }

    }
    char znak;
    float czest, bf1, bf2;
    cout<<licznik_slow<<endl;
    for(int i=0;i<26;i++)
    {
        znak=i+65;
        bf1=ile_liter[i];
        bf2=licznik_slow;
        czest=(bf1/bf2)*100;
        cout<<znak<<" ("<<round(czest*100)/100<<")"<<endl;
    }

    return 0;
}
