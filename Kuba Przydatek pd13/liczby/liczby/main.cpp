#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int czy(string liczba)
{
    int s=liczba.length();
    int a, b;
    string bufor1, bufor2;

    for(int i=0;i<s-1;i++)
    {
        bufor1=liczba[i];
        bufor2=liczba[i+1];
        istringstream isa(bufor1);
        isa>>a;
        istringstream isb(bufor2);
        isb>>b;
        if(a>b)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string liczbas;
    int licznik=0;
    ifstream liczby("dane.txt");
    for(int i=0;i<5000;i++)
    {
        liczby>>liczbas;
        if(czy(liczbas))
        {
            licznik++;
        }

    }
    cout<<licznik<<endl;
    return 0;
}
