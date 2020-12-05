#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int z_bin_na_dzies(string licz)
{
    int d=licz.length();
    int x=2;
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
void z_dzies_na_bin(int liczdzies)
{
    int i=0,tab[16];
    char wynik[16];
	while(liczdzies)
	{
		tab[i]=liczdzies%2;
		liczdzies/=2;
		i++;
	}

	for(int j=i-1;j>=0;j--)
    {
        wynik[i-j-1]=tab[j];
		//cout<<tab[j];
    }
    for(int k=0;k<i;k++)
    {
        cout<<int(wynik[k]);
    }
}
int main()
{
    string liczba;
    int ile_p=0;
    int dl;
    int maxi=0;
    int suma=0;
    string maxs;
    ifstream liczby("liczby.txt");
    for(int i=0;i<1000;i++)
    {
        liczby>>liczba;
        dl=liczba.length();
        if(liczba[dl-1]=='0') ile_p++;
        if(z_bin_na_dzies(liczba)>maxi)
        {
            maxi=z_bin_na_dzies(liczba);
            maxs=liczba;
        }

        if(dl==9)
        {
            suma+=z_bin_na_dzies(liczba);
        }

    }
    cout<<"a) : "<<ile_p<<endl;
    cout<<"b) : "<<maxi<<" dziesietny"<<endl;
    cout<<maxs<<" dwojkowy"<<endl;
    cout<<"c) : ";
    z_dzies_na_bin(suma);
    cout<<endl;
    return 0;
}
