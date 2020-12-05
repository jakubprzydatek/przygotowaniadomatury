#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_rekurencyjny(string s[])
{
    int dl=20;
    string bufor1, bufor2, bufor3, bufor4;
    for(int i=0;i<5;i++)
    {
        bufor1=s[i].substr(0,10);
        bufor2=s[i].substr(10,10);
        bufor3=s[i+10].substr(0,10);
        bufor4=s[i+10].substr(10,10);
        if(bufor1!=bufor2)
        {
            return 0;
        }
        else if(bufor1!=bufor3)
        {
            return 0;
        } else if(bufor1!=bufor4)
        {
            return 0;
        }
    }
        return 1;
}

int main()
{
    ifstream dane("dane_obrazki.txt");
    string bf[21];
    int dl, ile_rekurencyjnych=0;
    int k=0, h=0;
    while(k<200)
    {
        for(int i=0;i<21;i++)
        {
                dane>>bf[i];
                //cout<<bf[i]<<endl;
        }
        if(czy_rekurencyjny(bf))
        {
            ile_rekurencyjnych++;
            if(h==0)
            {
                cout<<"Pierwszy rekurencyjny"<<endl;
                for(int j=0;j<20;j++)
                {
                    for(int g=0;g<20;g++)
                    {
                        cout<<bf[j][g];
                    }
                    cout<<endl;
                }
                h++;
            }
        }
        k++;
        //cout<<endl;

    }
    cout<<"Rekurencyjnych: "<<ile_rekurencyjnych<<endl;
    return 0;
}
