#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
using namespace std;

int czy_pierwsza(int a)
{
    if(a==1 || a<=0)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int czy_napis_ros(string s)
{
    int len=s.length();
    char buf1, buf2;
    for(int i=0;i<len-1;i++)
    {
        buf1=s[i];
        buf2=s[i+1];
        if(buf1>=buf2)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ifstream dane("NAPIS.txt");
    ifstream dane1("NAPIS.txt");
    ofstream odp("ZADANIE5.txt");
    odp<<"b) "<<endl;
    int ilea=0;
    string napis, napis1;
    string napisy[1000];
    string pom[1000];
    int ile_razy[1000]={0};
    int dl;
    char bufor1;
    int suma=0;
    for(int i=0;i<1000;i++)
    {
        suma=0;
        dane>>napis;
        napisy[i]=napis;
        pom[i]=napis;
        dl=napis.length();
        if(czy_napis_ros(napis))
        {
            odp<<napis<<endl;
        }
        for(int j=0;j<dl;j++)
        {
            bufor1=napis[j];
            suma+=bufor1;
        }
        if(czy_pierwsza(suma))
        {
            ilea++;
        }

    }

    for(int i=0;i<1000;i++)
    {
        dane1>>napis1;

        for(int j=0;j<1000;j++)
        {
            if(napis1==napisy[j])
            {
                ile_razy[i]++;
                napisy[j]="";
            }
        }
    }
    odp<<endl<<"c) "<<endl;
    for(int i=0;i<1000;i++)
    {
        if(ile_razy[i]>1)
        {
        odp<<pom[i]<<endl;
        }
    }

    odp<<endl;
    odp<<"a) "<<ilea<<endl;
    return 0;
}
