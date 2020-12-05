#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int czy_palindrom(string slowo)
{
    int dl=slowo.length();
    int pdl=dl/2;
    for(int i=0;i<=pdl;i++)
    {
        if(slowo[i]!=slowo[dl-i-1])
        {
            return 0;
        }
        return 1;
    }
}

string odwroc(string slowo)
{
    string odwrocone="";
    int dl=slowo.length();
    for(int i=dl-1;i>=0;i--)
    {
        odwrocone=odwrocone+slowo[i];
    }
    return odwrocone;
}
int main()
{
    ifstream dane("slowa.txt");
    ofstream odp("hasla_b.txt");
    string slowo="okobcde", bufor1, bufor2, bufor3,haslo;

    int dl=slowo.length();
    int i;
    for(int j=0;j<1000;j++)
    {
        dane>>slowo;
        dl=slowo.length();
        for(i=dl-1;i>0;i--)
        {
            bufor1=slowo.substr(0,i+1);
            if(czy_palindrom(bufor1))
            {
                //cout<<bufor1<<"  "<<i<<endl;
                break;
            }
        }
        //i-=2;
        if(i>0)
        {
            bufor2=slowo.substr(i+1);
            bufor3=odwroc(bufor2);
            haslo=bufor3+slowo;
            odp<<haslo<<endl;
        }
    }
    return 0;
}
