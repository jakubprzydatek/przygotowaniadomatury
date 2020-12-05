#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int czy_kontrastujacy(int tab[200][320])
{
    int akt;
    int ile=0;
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<320;j++)
        {
            akt=tab[i][j];

            if(j!=0 && fabs(akt-tab[i][j-1])>128)
                {
                    ile++;
                }
            else if(j!=319 && fabs(akt-tab[i][j+1])>128)
                {
                    ile++;
                }
            else if(i!=0 && fabs(akt-tab[i-1][j])>128)
                {
                    ile++;
                }
            else if(i!=199 && fabs(akt-tab[i+1][j])>128)
                {
                    ile++;
                }
        }
    }
    return ile;
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
    cout<<czy_kontrastujacy(liczba)<<endl;
    return 0;
}
