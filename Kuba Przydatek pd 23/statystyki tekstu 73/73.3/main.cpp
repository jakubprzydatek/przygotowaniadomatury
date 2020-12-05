#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int dlugosc_podciagu(string s)
{
    int dl=s.length();
    int dl_podciagu=0, max_dl_podciagu=0;
    for(int i=0;i<dl;i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            dl_podciagu++;
        }
        else
        {
            if(dl_podciagu>max_dl_podciagu)
            {
                max_dl_podciagu=dl_podciagu;
            }
            dl_podciagu=0;
        }
    }
    return max_dl_podciagu;
}

int main()
{

    ifstream tekst("tekst.txt");
    ifstream tekst1("tekst.txt");
    string w, w_pierwsze;
    int dl_najdluzszego=0, ile_slow=0, pierwsze=0;
    for(int i=0;i<1876;i++)
    {
        tekst>>w;
        if(dlugosc_podciagu(w)>0)
        {
            if(dlugosc_podciagu(w)>dl_najdluzszego)
            {
                dl_najdluzszego=dlugosc_podciagu(w);
            }
        }
    }
    for(int i=0;i<1876;i++)
    {
        tekst1>>w;
        if(dlugosc_podciagu(w)==dl_najdluzszego)
        {
            if(pierwsze==0)
            {
                w_pierwsze=w;
                pierwsze++;
            }
                ile_slow++;
        }
    }
    cout<<"Dlugosc najdluzszego podslowa: "<<dl_najdluzszego<<endl;
    cout<<"Pierwsze podslowo: "<<w_pierwsze<<endl;
    cout<<"Ilosc slow z najdluzszym podslowem: "<<ile_slow<<endl;

    return 0;
}
