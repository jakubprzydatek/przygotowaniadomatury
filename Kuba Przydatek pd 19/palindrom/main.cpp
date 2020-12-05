#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_palindrom(string slowo)
{
    int dl=slowo.length();
    string odwrot;
    for(int i=dl-1;i>=0;i--)
    {
        odwrot=odwrot+slowo[i];
    }
    if(slowo==odwrot)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ifstream dane("dane.txt");
    ofstream odp("zadanie4.txt");
    string tekst;
    int ile=0;
    for(int i=0;i<1000;i++)
    {
        dane>>tekst;
        if(czy_palindrom(tekst))
        {
            odp<<tekst<<endl;
        }
    }

    return 0;
}
