#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string odwroc(string slowo)
{
    string odwrocone="";
    int dls=slowo.length();
    for(int i=dls-1;i>=0;i--)
    {
        odwrocone=odwrocone+slowo[i];
    }
    return odwrocone;
}
int main()
{
    ifstream dane("hasla.txt");
    ofstream odpa("wynik4a.txt");
    ofstream odpb("wynik4b.txt");
    ofstream odpc("wynik4c.txt");
    string haslo;
    char bufor1, bufor2;
    int ile_p=0, ile_niep=0, dl=0;
    for(int i=0;i<200;i++)
    {
        dane>>haslo;
        dl=haslo.length();
        if(dl%2==0)
        {
            ile_p++;
        } else
        {
            ile_niep++;
        }
        if(haslo==odwroc(haslo))
        {
            odpb<<haslo<<endl;
        }
        for(int j=0;j<dl-1;j++)
        {
            bufor1=haslo[j];
            bufor2=haslo[j+1];
            int suma=bufor1+bufor2;

            if(suma==220)
            {
                odpc<<haslo<<endl;
                break;
            }
        }

    }

    odpa<<"Parzystych: "<<ile_p<<endl<<"Nieparzystych: "<<ile_niep<<endl;


    return 0;
}
