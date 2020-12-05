#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string odwroc(string wyraz)
{
    string odwrocone="";
    int dl=wyraz.length();

    for(int i=dl-1;i>=0;i--)
    {
        odwrocone+=wyraz[i];
    }
    return odwrocone;
}

int main()
{
    ifstream slowa("slowa.txt");
    ifstream slowa1("slowa.txt");
    ifstream new_words("nowe.txt");
    ofstream wynik("wyniki5.txt");
    int liczba_wyst[13]={0};
    int dl;
    string slowo;
    for(int i=0;i<1000;i++)
    {
        slowa>>slowo;
        dl=slowo.length();

        liczba_wyst[dl]++;
    }
    slowa.close();

    int ile_razy[25]={0};
    int ile_razy_mir[25]={0};
    string nowe[25];
    string nowe_mirror[25];

    for(int i=0;i<25;i++)
    {
        new_words>>nowe[i];
        nowe_mirror[i]=odwroc(nowe[i]);
    }
    for(int i=0;i<1000;i++)
    {
        slowa1>>slowo;
        for(int j=0;j<25;j++)
        {
            if(slowo==nowe[j])
            {
                ile_razy[j]++;
            }
             if(slowo==nowe_mirror[j])
            {
                ile_razy_mir[j]++;
            }
        }
    }

    wynik<<"a) "<<endl;
    for(int i=1;i<13;i++)
    {
        wynik<<i<<" "<<liczba_wyst[i]<<endl;
    }

    wynik<<"b) "<<endl;

    for(int i=0;i<25;i++)
    {
        wynik<<nowe[i]<<" "<<ile_razy[i]<<" "<<ile_razy_mir[i]<<endl;
    }

    return 0;
}
