#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int najdluzsza_linia(int tab[200][320])
{
    int akt;
    int max_ciag=0;
    for(int i=0;i<320;i++)
    {
        akt=1;
        for(int j=1;j<200;j++)
        {
            if(tab[j][i]==tab[j-1][i])
            {
                akt++;
            }
            else
            {
                if(akt>max_ciag)
                {
                    max_ciag=akt;
                    akt=0;
                }
            }
        }
    }
    return max_ciag;
}

int main()
{
    ifstream dane("dane.txt");
    int liczba[200][320];
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<320;j++)
        {
            dane>>liczba[i][j];
        }
    }
    cout<<najdluzsza_linia(liczba);

    return 0;
}
