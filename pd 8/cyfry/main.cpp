#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string bufor;
    int liczba, d, cyfra;
    string liczbas="";
    int ile_parz=0;
    int suma, sumap, maxsuma, minsuma, maxliczba, minliczba;
    maxsuma=0;
    minsuma=0;
    maxliczba=0;
    minliczba=0;
    ifstream cyfrya("cyfry.txt");
    ofstream zadanie("zadanie4.txt");
    //a
    for(int i=0;i<1000;i++)
    {
        cyfrya>>liczba;
        if(liczba%2==0) ile_parz++;
        liczbas=liczba;
    }
    zadanie<<"a) " <<ile_parz<<endl;
    cyfrya.close();
    ifstream cyfryb("cyfry.txt");
    //b1
    for(int i=0;i<1000;i++)
    {
        suma=0;
        cyfryb>>liczbas;
        istringstream isa(liczbas);
        d=liczbas.length();
        for(int j=0;j<d;j++)
        {
            bufor=liczbas[j];
            istringstream iss(bufor);
            iss>>cyfra;
            suma+=cyfra;
        }
        if(suma>maxsuma)
        {
            isa>>maxliczba;
            maxsuma=suma;

        }

    }
    zadanie<<"b1) "<<maxliczba<<endl;
    cyfryb.close();
    ifstream cyfryc("cyfry.txt");
    //b2
    minsuma=maxsuma;
    for(int i=0;i<1000;i++)
    {
        suma=0;
        cyfryc>>liczbas;
        istringstream isb(liczbas);
        d=liczbas.length();
        for(int j=0;j<d;j++)
        {
            bufor=liczbas[j];
            istringstream isz(bufor);
            isz>>cyfra;
            suma+=cyfra;
        }
        if(suma<minsuma)
        {
            isb>>minliczba;
            minsuma=suma;

        }
    }
    zadanie<<"b2) "<<minliczba<<endl;
    cyfryc.close();
    ifstream cyfryd("cyfry.txt");
    //c
    zadanie<<"c) " <<endl;
    int cyfra1, cyfra2;
    string bufor1;
    int czy_rosnaca;
    for(int i=0;i<1000;i++)
    {
        czy_rosnaca=1;
        cyfryd>>liczbas;
        d=liczbas.length();
        for(int j=0;j<d-1;j++)
        {
            bufor=liczbas[j];
            istringstream isc(bufor);
            isc>>cyfra1;
            bufor1=liczbas[j+1];
            istringstream isd(bufor1);
            isd>>cyfra2;
            if(cyfra1>=cyfra2)
                {
                    czy_rosnaca=0;
                    break;
                }
        }
        if(czy_rosnaca==1)
        {
            zadanie<<liczbas<<endl;
        }

    }
    return 0;
}
