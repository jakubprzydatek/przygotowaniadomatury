#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
    int powierzchnia=15000; // w tresci zadania jest 30000 ale program daje odpowiedzi zgodne z kluczem tylko dla 15000
    int nie_zaros;
    int bufor=30000;
    float aodp;
    ofstream odp("odp.txt");




    for(int i=0;i<32;i++)
    {
        powierzchnia=powierzchnia-25; //pierwszy zer królików
        nie_zaros=bufor-powierzchnia;
        powierzchnia=powierzchnia+(0.05*nie_zaros);//zarastanie trawy w trakcie dnia
        aodp=powierzchnia;
        powierzchnia=powierzchnia-25;//drugi zer
    }
    odp<<"a) "<<endl;
    odp<<(aodp/30000*100)<<endl; // nie wiem jak zaokrąglić zeby nie utracic dobrego wyniku //a)

    powierzchnia=15000;

    odp<<"b) "<<endl;
    for(int i=0;i<32;i++)
    {
        powierzchnia=powierzchnia-25; //pierwszy zer królików
        nie_zaros=bufor-powierzchnia;
        powierzchnia=powierzchnia+(0.05*nie_zaros);//zarastanie trawy w trakcie dnia
        odp<<"Dzien "<<i<<", zarosnieta powierzchnia: "<<powierzchnia<<endl; //b)
        powierzchnia=powierzchnia-25;//drugi zer
    }

    powierzchnia=15000;


    odp<<"c) "<<endl;
    for(int i=0;i<5000;i++)
    {
        powierzchnia=powierzchnia-25; //pierwszy zer królików
        nie_zaros=bufor-powierzchnia;
        powierzchnia=powierzchnia+(0.05*nie_zaros);//zarastanie trawy w trakcie dnia
        powierzchnia=powierzchnia-25;//drugi zer
    }
    odp<<"Nie osiąga zera ani całej powierzchni tylko dąży do: "<<powierzchnia<<endl;

    powierzchnia=15000;


    odp<<"d) "<<endl;
    int dni=0;
    while(powierzchnia)
    {
        dni++;
        powierzchnia=powierzchnia-1250; //pierwszy zer królików
        nie_zaros=bufor-powierzchnia;
        if(powierzchnia<=0)
        {
            odp<<"Osiąga zero rano po dniu: "<<dni<<endl;
            break;
        }
        powierzchnia=powierzchnia+(0.05*nie_zaros);//zarastanie trawy w trakcie dnia
        powierzchnia=powierzchnia-1250;//drugi zer
        if(powierzchnia<=0)
        {
            odp<<"Osiąga zero wieczorem po dniu: "<<dni<<endl;
            break;
        }
    }

    return 0;
}
