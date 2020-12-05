#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream dane("dane_geny.txt");
    string genotyp;
    int dl;
    int ile_gat[501]={0}, ile_roznych=0, maks_osobnikow=0;
    for(int i=0;i<1000;i++)
    {
        dane>>genotyp;
        dl=genotyp.length();
        ile_gat[dl]++;
    }
    for(int i=1;i<=500;i++)
    {
        if(ile_gat[i]>0)
        {
            ile_roznych++;
            if(ile_gat[i]>maks_osobnikow)
            {
                maks_osobnikow=ile_gat[i];
            }
            //cout<<"Gatunek: "<<i<<" Liczba osobnikow: "<<ile_gat[i]<<endl;
        }
    }
    cout<<"Roznych gatunkow: "<<ile_roznych<<endl;
    cout<<"Maks osobnikow: "<<maks_osobnikow<<endl;
    return 0;
}
