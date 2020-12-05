#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream dane("dane_6_1.txt");
    ofstream wynik("wyniki_6_1.txt");
    string slowo;
    char bufor;
    string szyfr;
    int dl;
    int klucz=107;
    for(int i=0;i<100;i++)
    {
        szyfr="";
        dane>>slowo;
        dl=slowo.length();

        for(int j=0;j<dl;j++)
        {
            bufor=slowo[j];
            bufor=bufor-65;
            bufor=(bufor+klucz)%26+65;
            szyfr=szyfr+bufor;
        }
    wynik<<szyfr<<endl;
    }
    return 0;
}
