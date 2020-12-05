#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("tj.txt");
    ifstream klucze("klucze1.txt");
    ofstream wynik("wynik4a.txt");
    string slowo;
    string klucz;
    string szyfr;
    char bufor, bufork;
    int dls;
    int dlk;
    int k=0;

    for(int j=0;j<120;j++)
    {
        dane>>slowo;
        klucze>>klucz;
        dls=slowo.length();
        dlk=klucz.length();
        szyfr="";
        k=0;
    for(int i=0;i<dls;i++)
    {
        bufork=klucz[k];
        bufork-=65;
        k++;
        bufor=slowo[i];
        bufor=bufor-64;
        bufor=(bufor+bufork)%26+65;

        if(k==dlk)
        {
            k=0;
        }
        szyfr+=bufor;
    }
        wynik<<szyfr<<endl;
    }
    return 0;
}
