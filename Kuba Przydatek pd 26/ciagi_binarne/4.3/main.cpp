#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int wartosc(string s)
{
    string s1="";
    double suma=0;
    int dl=s.length();
    for(int i=dl-1;i>=0;i--)
    {
        s1=s1+s[i];
    }

    for(int i=0;i<dl;i++)
    {
        if(s1[i]=='1')
        {
            suma+=pow(2,i);
        }
    }
    if(suma>65535) return 0;
    return suma;
}

int main()
{
    ifstream dane("binarne.txt");
    string napis, naj_napis;
    int naj_wartosc=0;
    for(int i=0;i<500;i++)
    {
        dane>>napis;
        if(wartosc(napis)>naj_wartosc)
        {
            naj_wartosc=wartosc(napis);
            naj_napis=napis;
        }


    }
    cout<<"Wartosc dziesietna: "<<naj_wartosc<<endl;
    cout<<"Zapis binarny: "<<naj_napis<<endl;
    return 0;
}
