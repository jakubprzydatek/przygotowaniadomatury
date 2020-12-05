#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int ile_razy_osiem(string s)
{
    int dl=s.length();
    int wynik=0;
    for(int i=0;i<dl;i++)
    {
        if(s[i]=='8')
        {
            wynik++;
        }
    }
    return wynik;
}

int nie_zawiera_siedem(string s)
{
    int dl=s.length();
    int wynik=0;
    for(int i=0;i<dl;i++)
    {
        if(s[i]=='7')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ifstream liczby1("LICZBY1.txt");
    ifstream liczby2("LICZBY2.txt");
    int min_liczba=99999, bufor;
    string liczba, liczba1;
    int min_dl=5;
    int dl, dl1, suma_1=0, suma_2=0, ile_osiem=0;

    string licz1[2000], licz2[20];
    for(int i=0;i<2000;i++)
    {
        liczby1>>liczba;
        ile_osiem+=ile_razy_osiem(liczba);
        dl=liczba.length();
        suma_1+=dl;
        licz1[i]=liczba;
        if(nie_zawiera_siedem(liczba))
        {
           // cout<<liczba<<endl; //d
        }
        if(dl<=min_dl)
        {
            istringstream iss(liczba);
            iss>>bufor;
                if(bufor<min_liczba)
                {
                    min_dl=dl;
                    min_liczba=bufor;
                }
        }

    }

    for(int i=0;i<20;i++)
    {
        liczby2>>liczba1;
        dl1=liczba1.length();
        suma_2+=dl1;
        licz2[i]=liczba;
    }


    for(int i=0;i<20;i++)
    {
        for(int j=0;j<2000;j++)
        {
            if(licz2[i]==licz1[j])
            {
                cout<<licz1[i]<<endl;
            }
        }
    }

    //cout<<min_liczba<<endl; //a
   // cout<<suma_1+suma_2<<endl; //b
   // cout<<ile_osiem<<endl; //c


    return 0;
}
