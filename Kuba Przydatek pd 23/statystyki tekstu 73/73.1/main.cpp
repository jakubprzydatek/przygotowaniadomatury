#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_sa_2_takie_litery(string s)
{
    int dl=s.length();

    for(int i=0;i<dl-1;i++)
    {
        if(s[i]==s[i+1]) return 1;
    }
    return 0;
}

int main()
{
    int licznik=0;
    ifstream tekst("tekst.txt");
    string w;
    for(int i=0;i<1876;i++)
    {
        tekst>>w;
        if(czy_sa_2_takie_litery(w)) licznik++;
    }
    cout<<"Slow w ktorych wystepuja 2 takie same litery: "<<licznik<<endl;
    return 0;
}
