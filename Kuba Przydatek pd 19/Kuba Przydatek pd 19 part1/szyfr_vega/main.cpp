#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int ile_roznych(string slowo)
{
    int dl=slowo.length();
    int ile=0;
    char gwiazdka='*';
    for(int i=0;i<dl;i++)
    {
        if(slowo[i]!=gwiazdka)
        {
            ile++;
            for(int j=i+1;j<dl;j++)
            {
                if(slowo[i]==slowo[j])
                {
                    slowo[j]=gwiazdka;
                }
            }
        }
    }

    return ile;
}

int czy_oddalenie(string slowo)
{
    int dl=slowo.length();
    int odleglosc;
    for(int i=0;i<dl-1;i++)
    {
        odleglosc=fabs(slowo[i]-slowo[i+1]);
        if(odleglosc>10)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string slowo_max_liter;
    int ile_max_liter=0;

    ifstream sygnaly1("sygnaly.txt");
    ifstream przyklad("przyklad.txt");
    ofstream wynik("wyniki4.txt");
    wynik<<"c) "<<endl;
    string slowo, odpa="";
    for(int i=0;i<1000;i++)
    {
        sygnaly1>>slowo;
        if((i+1)%40==0 && i>35)
        {

            odpa+=slowo[9];
        }

        if(ile_roznych(slowo)>ile_max_liter)
        {
            ile_max_liter=ile_roznych(slowo);
            slowo_max_liter=slowo;
        }

        if(czy_oddalenie(slowo))
        {
            wynik<<slowo<<endl;
        }
    }
    wynik<<"a) "<<odpa<<endl;
    wynik<<"b) "<<slowo_max_liter<<" "<<ile_max_liter<<endl;

    cout<<czy_oddalenie("ABEZA");
    return 0;
}
