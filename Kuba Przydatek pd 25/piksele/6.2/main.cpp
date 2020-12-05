#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_os_symetrii(int tab[])
{
    for(int i=0;i<320;i++)
    {
        if(tab[i]!=tab[320-i-1]) return 0;
    }
    return 1;
}

int main()
{
    ifstream dane("dane.txt");
    int liczba[320], najciemniejszy=300, najjasniejszy=0;
    int ile=0;
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<320;j++)
        {
            dane>>liczba[j];
        }
        if(czy_os_symetrii(liczba)==0) ile++;

    }
    cout<<ile<<endl;
    return 0;
}
