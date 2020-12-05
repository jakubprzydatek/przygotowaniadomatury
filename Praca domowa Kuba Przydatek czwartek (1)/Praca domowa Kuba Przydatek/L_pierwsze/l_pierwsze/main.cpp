#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    int czy;
    string liczbas;
    int liczbat;
    int spr, licznik;
    licznik=0;
    ifstream plik("liczby.txt");
    ofstream wynik("zadanie_5.txt");
    for(int i=0;i<500;i++)
    {
        czy=0;
        plik>>liczbas;
        istringstream iss(liczbas);
        iss>>liczbat;
        spr=sqrt(liczbat);
        //cout<<spr<<endl;
        for(int j=2;j<spr;j++)
        {
            if(spr%j==0&&spr!=j)
            {
                cout<<spr<<endl;
                czy++;
            }
        }
        if(czy==0)
        {
            //cout<<liczbat<<endl;
            wynik<<liczbat<<endl;
            licznik++;
        }

    }
    return 0;
}
