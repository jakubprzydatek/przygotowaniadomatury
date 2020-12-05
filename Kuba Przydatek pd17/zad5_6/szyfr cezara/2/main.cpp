#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream dane("dane_6_2.txt");
    ofstream wynik("wyniki_6_2.txt");
    string slowo;
    char bufor;
    string szyfr;
    int dl;
    int klucz, kluczk;
    for(int i=0;i<717;i++)
    {
        szyfr="";
        dane>>slowo;
        dane>>klucz;
        dl=slowo.length();
        cout<<i<<"."<<slowo<<" "<<klucz<<endl;

        for(int j=0;j<dl;j++)
        {
            bufor=slowo[j];
            bufor=bufor-64;
            if(bufor-klucz<1)
            {
                //klucz=klucz-bufor;
                klucz=klucz%26;
                bufor=bufor+26-klucz+64;
            }
            else
            {
                bufor=bufor-klucz+64;
            }
            szyfr=szyfr+bufor;
        }
    wynik<<szyfr<<endl;
    }
    return 0;
}
