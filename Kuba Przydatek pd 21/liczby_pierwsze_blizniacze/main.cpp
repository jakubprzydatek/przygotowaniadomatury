#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int czy_pierwsza(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    ifstream dane("dane4.txt"); //nie mam pliku dane_6.txt tylko dane4.txt
    ofstream wynik("wyniki_6.txt");
    int liczby[2000]={0}, ile_pierwszych=0, min_pierwsza=30000, max_pierwsza=0;
    for(int i=0;i<2000;i++)
    {
        dane>>liczby[i];

        if(czy_pierwsza(liczby[i])==1)
        {
            ile_pierwszych++;

            if(liczby[i]>max_pierwsza)
            {
                max_pierwsza=liczby[i];
            }
            if(liczby[i]<min_pierwsza)
            {
                min_pierwsza=liczby[i];
            }
        }
    }

    wynik<<"a) "<<ile_pierwszych<<endl;
    wynik<<"b) Najmniejsza: "<<min_pierwsza<<endl<<"Najwieksza: "<<max_pierwsza<<endl;
    wynik<<"c)"<<endl;
    for(int i=0;i<1999;i++)
    {
        if(czy_pierwsza(liczby[i]) && czy_pierwsza(liczby[i+1]))
        {
            if(fabs(liczby[i]-liczby[i+1])==2)
            {
                wynik<<liczby[i]<<" "<<liczby[i+1]<<endl;
            }
        }
    }
    return 0;
}
