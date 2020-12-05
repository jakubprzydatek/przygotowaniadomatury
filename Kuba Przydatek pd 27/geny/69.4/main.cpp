#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string odwroc(string genotyp)
{
    string odwrocone="";
    int dl=genotyp.length();
    for(int i=dl-1;i>=0;i--)
    {
        odwrocone+=genotyp[i];
    }
    return odwrocone;
}
string kodujaca(string genotyp)
{
    int dl=genotyp.length();
    int dlg;
    string gen, czesc_kodujaca="";
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
                    czesc_kodujaca+=gen;
                    i=j+2;
                    break;
                }
            }
        }
    }
    return czesc_kodujaca;
}



int main()
{
    ifstream dane("dane_geny.txt");
    string genotyp, genotyp_reverse;
    int dl, odpornych=0, silnie_odpornych=0;
    int ile_gat[501]={0};
    for(int i=0;i<1000;i++)
    {
        dane>>genotyp;
        dl=genotyp.length();
        genotyp_reverse=odwroc(genotyp);
        if(kodujaca(genotyp)==kodujaca(genotyp_reverse))odpornych++;

        if(genotyp==genotyp_reverse) silnie_odpornych++;


    }
    cout<<"Odpornych: "<<odpornych<<endl;
    cout<<"Silnie odpornych: "<<silnie_odpornych<<endl;
    return 0;
}
