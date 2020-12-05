#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string jaki_obrazek(string s[])
{
    int dl=20;
    int ile_zlych_wiersz=0, ile_zlych_kolumna=0;
    int ile_jedynek=0;
    char wlasciwy_bit;
    for(int i=0;i<20;i++)
    {

        for(int j=0;j<20;j++)
        {
            if(s[i][j]=='1') ile_jedynek++;
            if(j==19)
            {

                if(ile_jedynek%2==1)
                {
                    wlasciwy_bit='1';
                }
                else
                {
                    wlasciwy_bit='0';
                }

                if(wlasciwy_bit!=s[i][20])
                {
                    ile_zlych_wiersz++;
                }

                ile_jedynek=0;
            }
        }
    }

    for(int i=0;i<20;i++)
    {

        for(int j=0;j<20;j++)
        {

            if(s[j][i]=='1')ile_jedynek++;
            if(j==19)
            {
                //cout<<ile_jedynek<<endl;
                if(ile_jedynek%2==1)
                {
                    wlasciwy_bit='1';
                }
                else
                {
                    wlasciwy_bit='0';
                }
                //cout<<"Wlasciwy "<<wlasciwy_bit<<" "<<s[20][i]<<endl;
                if(wlasciwy_bit!=s[20][i])
                {
                    ile_zlych_kolumna++;
                }
                //cout<<"Ile zlych kolumna "<<ile_zlych_kolumna<<endl;
                ile_jedynek=0;
            }
        }
    }

    if(ile_zlych_kolumna>1 || ile_zlych_wiersz>1)
    {
        return "nienaprawialny";
    }
    else if(ile_zlych_kolumna>0 || ile_zlych_wiersz>0)
    {
        return "naprawialny";
    }
    else
    {
        return "poprawny";
    }
    //return ile_zlych_kolumna;
}

int ile_bledow(string s[])
{
    int dl=20;
    int ile_zlych_wiersz=0, ile_zlych_kolumna=0;
    int ile_jedynek=0;
    char wlasciwy_bit;
    for(int i=0;i<20;i++)
    {

        for(int j=0;j<20;j++)
        {
            if(s[i][j]=='1') ile_jedynek++;
            if(j==19)
            {

                if(ile_jedynek%2==1)
                {
                    wlasciwy_bit='1';
                }
                else
                {
                    wlasciwy_bit='0';
                }

                if(wlasciwy_bit!=s[i][20])
                {
                    ile_zlych_wiersz++;
                }

                ile_jedynek=0;
            }
        }
    }

    for(int i=0;i<20;i++)
    {

        for(int j=0;j<20;j++)
        {

            if(s[j][i]=='1')ile_jedynek++;
            if(j==19)
            {
                if(ile_jedynek%2==1)
                {
                    wlasciwy_bit='1';
                }
                else
                {
                    wlasciwy_bit='0';
                }
                if(wlasciwy_bit!=s[20][i])
                {
                    ile_zlych_kolumna++;
                }
                ile_jedynek=0;
            }
        }
    }

    return ile_zlych_kolumna+ile_zlych_wiersz;
}

int main()
{
    ifstream dane("dane_obrazki.txt");
    string bf[21];
    int dl, ile_naprawialnych=0, ile_poprawnych=0, ile_nienaprawialnych=0, maks_bledow=0;
    int k=0;
    while(k<200)
    {
        for(int i=0;i<21;i++)
        {
                dane>>bf[i];
                cout<<bf[i]<<endl;
        }
        if(ile_bledow(bf)>maks_bledow)
        {
            maks_bledow=ile_bledow(bf);
        }
        if(jaki_obrazek(bf)=="poprawny")
        {
            ile_poprawnych++;
        }
        if(jaki_obrazek(bf)=="naprawialny")
        {
            ile_naprawialnych++;
        }
        if(jaki_obrazek(bf)=="nienaprawialny")
        {
            ile_nienaprawialnych++;
        }
        k++;
        cout<<endl;

    }

    cout<<"Poprawnych: "<<ile_poprawnych<<endl;
    cout<<"Naprawialnych: "<<ile_naprawialnych<<endl;
    cout<<"Nienaprawialnych: "<<ile_nienaprawialnych<<endl;
    cout<<"Maks bledow: "<<maks_bledow<<endl;
    return 0;
}
