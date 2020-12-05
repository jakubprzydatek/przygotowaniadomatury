#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;
int czy_pierwsza(int l)
{
    if(l<2) return 0;
    int sq;
    int p=1;
    sq=(int)sqrt(l);
    for(int j=2;j<=sq;j++)
    {
        if(l%j==0)
        {
            p=0;
            return 0;
        }
}
return 1;
}
int suma_cyfr(long l)
{
    int suma=0;
    while(l!=0)
    {
        suma=suma+(l%10);
        l=l/10;
    }
    return suma;
}
string zamiana_na_bin(long l)
{
    string liczba="";
    char bufor;
    while(l!=0)
    {
        bufor=l%2+48;
        liczba=bufor+liczba;
        l=l/2;
    }
    return liczba;
}
int suma_cyfrbin(string l)
{
    int d=l.length();
    char znak;
    int suma=0;
    for(int i=0;i<d;i++)
    {
        znak=l[i];
        if(znak=='1')
        {
            suma++;
        }
    }
    return suma;
}
int main()
{

    int p1, p2;
    string liczbabin;
    ofstream zakres1("1.txt");
    ofstream zakres2("2.txt");
    ofstream zakres3("3.txt");
    for(int i=2;i<=1000;i++)
    {
        if(czy_pierwsza(i) && czy_pierwsza(suma_cyfr(i)))
        {
            liczbabin=zamiana_na_bin(i);
            if(czy_pierwsza(suma_cyfrbin(liczbabin))) zakres1<<i<<endl;
        }
    }
    for(int i=100;i<=10000;i++)
    {
        if(czy_pierwsza(i) && czy_pierwsza(suma_cyfr(i)))
        {
            liczbabin=zamiana_na_bin(i);
            if(czy_pierwsza(suma_cyfrbin(liczbabin))) zakres2<<i<<endl;
        }
    }
    for(int i=1000;i<=100000;i++)
    {
        if(czy_pierwsza(i) && czy_pierwsza(suma_cyfr(i)))
        {
            liczbabin=zamiana_na_bin(i);
            if(czy_pierwsza(suma_cyfrbin(liczbabin))) zakres3<<i<<endl;
        }
    }
    return 0;
}
