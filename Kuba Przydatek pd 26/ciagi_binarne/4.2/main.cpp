#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_poprawny(string s)
{
    int tab[4]={8,4,2,1};
    int suma=0;
    int dl=s.length();
    string s1;
    int k=dl/4;
    for(int i=0;i<dl;i+=4)
    {
        s1=s.substr(i,4);
        for(int j=0;j<4;j++)
        {
            if(s1[j]=='1')
            {
                suma+=tab[j];
            }
        }
        if(suma>9)
        {
            return 0;
        }
        suma=0;
    }
    return 1;
}

int main()
{
    ifstream dane("binarne.txt");
    string napis, naj_napis;
    int dl, min_dl=65000, ile=0;
    for(int i=0;i<500;i++)
    {
        dane>>napis;
        dl=napis.length();
        if(czy_poprawny(napis)==0)
        {
            ile++;
            if(dl<min_dl)
            {
                min_dl=dl;
                naj_napis=napis;
            }
        }

    }
    cout<<"Ile niepoprawnych: "<<ile<<endl;
    cout<<"Najkrotszy niepoprawny i jego dlugosc: "<<naj_napis<<" "<<min_dl<<endl;
    return 0;
}
