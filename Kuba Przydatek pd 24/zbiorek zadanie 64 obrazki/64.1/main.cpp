#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_rewers(string s[])
{
    int dl;
    int czarnych=0, bialych=0;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(s[i][j]=='1')
            {
                    czarnych++;
            }
            else
            {
                bialych++;
            }

        }
    }
    if(czarnych>bialych)
    {
        return 1;
    }
    return 0;
}

int main()
{
    ifstream dane("dane_obrazki.txt");
    string bf[21];
    int dl, ile_rewers=0;
    int k=0;
    while(k<200)
    {
        for(int i=0;i<21;i++)
        {
                dane>>bf[i];
                cout<<bf[i]<<endl;
        }
        if(czy_rewers(bf)) ile_rewers++;
        k++;
        cout<<endl;

    }
    cout<<"Rewersow: "<<ile_rewers<<endl;
    return 0;
}
