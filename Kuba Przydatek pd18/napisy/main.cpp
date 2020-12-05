#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int same_zera(string n)
{
    int dls=n.length();
    for(int i=0;i<dls;i++)
    {
        if(n[i]=='1')
        {
            return 0;
        }
    }
    return 1;
}

int same_jedynki(string n)
{
    int dls=n.length();
    for(int i=0;i<dls;i++)
    {
        if(n[i]=='0')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ifstream dane("napisy.txt");
    int ile_p=0, dl, ile_r=0;
    int ile_z, ile_j;
    int same_z=0, same_j=0;
    string napis;
    for(int i=0;i<1000;i++)
    {
        ile_j=0;
        ile_z=0;
        dane>>napis;
        dl=napis.length();
        if(dl%2==0)
        {
            ile_p++;
        }

        if(same_jedynki(napis))
        {
            same_j++;
        }
        if(same_zera(napis))
        {
            same_z++;
        }

        for(int j=0;j<dl;j++)
        {
            if(napis[j]=='1')
            {
                ile_j++;
            }
            else
            {
                ile_z++;
            }
        }
        if(ile_j==ile_z)
        {
            ile_r++;
        }

    }
    cout<<"Przystych dlugosci "<<ile_p<<endl;
    cout<<"Taka sama liczba 0 i 1 "<<ile_r<<endl;
    cout<<"Same zera "<<same_z<<endl;
    cout<<"Same jedynki "<<same_j<<endl;
    return 0;
}
