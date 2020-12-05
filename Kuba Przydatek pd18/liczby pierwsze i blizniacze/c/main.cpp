#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int czy_pierwsza(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ifstream pary("pary.txt");
    ofstream odpc("odp6c.txt");
    int liczba1, liczba2;
    for(int i=0;i<500;i++)
    {
        pary>>liczba1;
        pary>>liczba2;
        if(czy_pierwsza(liczba1) && czy_pierwsza(liczba2))
        {
            if(liczba2-liczba1==2)
            {
                odpc<<liczba1<<" "<<liczba2<<endl;
            }
        }
    }

    return 0;
}
