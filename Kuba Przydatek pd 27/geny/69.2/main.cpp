#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int czy_mutacja(string genotyp)
{
    string mutujacy="BCDDC";

    return genotyp.find(mutujacy);
}

int geny(string genotyp)
{
    int dl=genotyp.length();
    int ile_genow=0, ile_zmutowanych=0;
    int dlg;
    string gen;
    for(int i=0;i<dl-1;i++)
    {
        if(genotyp[i]=='A' && genotyp[i+1]=='A')
        {
            for(int j=i+2;j<dl-1;j++)
            {
                if(genotyp[j]=='B' && genotyp[j+1]=='B')
                {
                    dlg=j-i+2;
                    gen=genotyp.substr(i,dlg);
                    if(czy_mutacja(gen)>=0)
                    {
                        ile_zmutowanych++;
                    }
                    ile_genow++;
                   // cout<<gen<<endl;
                    i=j+2;
                    break;
                }
            }
        }
    }
    return ile_zmutowanych;

}

int main()
{
    ifstream dane("dane_geny.txt");
    string genotyp;
    int dl, zmutowanych=0;
    int ile_gat[501]={0};
    for(int i=0;i<1000;i++)
    {
        dane>>genotyp;
        dl=genotyp.length();
        if(geny(genotyp)>0)zmutowanych++;

    }
    cout<<zmutowanych<<endl;

    //cout<<geny("AACDBABBBCDAABCBBAAE");

    return 0;
}
