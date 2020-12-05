#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int ile_geny(string genotyp)
{
    int dl=genotyp.length();
    int ile_genow=0;
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
                    ile_genow++;
                    i=j+2;
                    break;
                }
            }
        }
    }
    return ile_genow;
}

int dl_geny(string genotyp)
{
    int dl=genotyp.length();
    int max_dl=0;
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
                    if(dlg>max_dl)
                    {
                        max_dl=dlg;
                    }
                    gen=genotyp.substr(i,dlg);
                    i=j+2;
                    break;
                }
            }
        }
    }
    return dlg;

}

int main()
{
    ifstream dane("dane_geny.txt");
    string genotyp;
    int dl, max_genow=0, max_dl_genu=0;
    int ile_gat[501]={0};
    for(int i=0;i<1000;i++)
    {
        dane>>genotyp;
        dl=genotyp.length();
        if(ile_geny(genotyp)>max_genow)
        {
                max_genow=ile_geny(genotyp);
        }
        if(dl_geny(genotyp)>max_dl_genu)
        {
            max_dl_genu=dl_geny(genotyp);
        }

    }
    cout<<"Najwieksza ilosc genow: "<<max_genow<<endl;
    cout<<"Najdluzszy gen: "<<max_dl_genu<<endl;
    return 0;
}
