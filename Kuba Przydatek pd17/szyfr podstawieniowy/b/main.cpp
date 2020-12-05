#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("sz.txt");
    ifstream klucze("klucze2.txt");
    ofstream wynik("wynik4b.txt");
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
            bufork-=64;
            k++;
            bufor=slowo[i];
            bufor=bufor-64;
            if((bufor-bufork)<1)
            {
                bufor=(bufor+26-bufork)+64;
            }
            else
            {
                bufor=(bufor-bufork)+64;
            }

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
