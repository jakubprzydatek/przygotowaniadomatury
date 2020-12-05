#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int z_osm_na_dzies(string licz)
{
    int d=licz.length();
    int x=8;
    string bf;
    bf=licz[0];
    istringstream isa(bf);
    int w;
    isa>>w;
    string bufor;
    int wsp;
    for(int i=1;i<d;i++)
    {
        bufor=licz[i];
        istringstream iss(bufor);
        iss>>wsp;
        w=w*x+wsp;
    }
    return w;

}
int main()
{
    ifstream liczby("dane.txt");
    ofstream liczbydz("danedzies.txt");
    ofstream wynik("wynik6.txt");
    string liczba;
    int dl;
    int licznik=0;
    int licznik2=0;
    int l1,l2;
    string buff1, buff2;
    int por1, por2;
    int b;
        for(int i=0;i<5000;i++)
            {
                b=0;
                liczby>>liczba;
                if(liczba[0]==liczba[(liczba.length())-1]) licznik++; //a)
                liczbydz<<z_osm_na_dzies(liczba)<<endl;
                dl=liczba.length();
                for(int j=0;j<dl-1;j++)
                    {
                        buff1=liczba[j];
                        buff2=liczba[j+1];
                        istringstream isx(buff1);
                        isx>>por1;
                        istringstream isz(buff2);
                        isz>>por2;
                        if(por1>por2)
                        {
                            b++;
                            break;
                        }
                    }
                if(b==0) licznik2++;

            }


    liczbydz.close();
    ifstream dzies("danedzies.txt");
    string liczbad;
    int licznik1=0;
        for(int i=0;i<5000;i++)
            {
                dzies>>liczbad;
                if(liczbad[0]==liczbad[(liczbad.length())-1]) licznik1++; //b)
            }

            wynik<<"Odp a: "<<licznik<<endl;
            wynik<<"Odp b: "<<licznik1<<endl;
            wynik<<"Odp c: "<<licznik2<<endl;
    return 0;
}
