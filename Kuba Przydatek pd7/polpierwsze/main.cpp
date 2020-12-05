#include <iostream>
#include <fstream>

using namespace std;
int czy_pierwsza(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0 && a!=i) {return 0;}
    }
    return 1;
}
int main()
{
    int licznik;
    int liczba;
    int tab[2]={3,9};
    int dzielnik[2];
    ifstream liczby("liczby.txt");
    ofstream zadanie("zadanie5.txt");
    for(int i=0;i<500;i++)
    {
        liczby>>liczba;
        licznik=0;
        dzielnik[0]=0;
        dzielnik[1]=0;//Nie mam dobrego sposobu na zerowanie tablicy int
        for(int j=2;j<liczba;j++)
        {
            if(licznik>2) break;
            if(liczba%j==0)
            {
                dzielnik[licznik]=j;
                licznik++;
            }
        }
        if(licznik==2)
        {
            if(czy_pierwsza(dzielnik[0]) && czy_pierwsza(dzielnik[1])&&(dzielnik[0]*dzielnik[1])==liczba)
            {
                zadanie<<"Dzielniki: "<<dzielnik[0]<<", "<<dzielnik[1]<<": "<<liczba<<endl;
            }
        }

    }
    return 0;
}
