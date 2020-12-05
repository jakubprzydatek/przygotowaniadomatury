#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string liczba;
    string cyfr1, cyfr2;
    int cyfra1, cyfra2;
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");
    ifstream dane3("dane3.txt");
    ofstream zadanie("zadanie4.txt");
    int czy=1;
    int licznik=0;
    int d;
    //Dane1
    for(int i=0;i<500;i++)
    {
        dane1>>liczba;
        d=liczba.length();
        for(int j=0;j<d-1;j++)
        {
            czy=1;
            cyfr1=liczba[j];//Musia³em u¿yæ zmiennych typu string ¿eby funkcja istringstream mog³a zadzia³aæ
            cyfr2=liczba[j+1];//Pojedyñczy znak z tablicy string jest traktowany jako char
            istringstream isa(cyfr1);
            isa>>cyfra1;
            istringstream isb(cyfr2);
            isb>>cyfra2;
            if(cyfra1>=cyfra2)
            {
                czy=0;
                break;

            }
        }
        if (czy==1)licznik++;
    }
    zadanie<<"Dane 1: "<<licznik<<endl;
    //Dane2
    licznik=0;
    for(int i=0;i<1000;i++)
    {
        dane2>>liczba;
        d=liczba.length();
        for(int j=0;j<d-1;j++)
        {
            czy=1;
            cyfr1=liczba[j];//Musia³em u¿yæ zmiennych typu string ¿eby funkcja istringstream mog³a zadzia³aæ
            cyfr2=liczba[j+1];//Pojedyñczy znak z tablicy string jest traktowany jako char
            istringstream isa(cyfr1);
            isa>>cyfra1;
            istringstream isb(cyfr2);
            isb>>cyfra2;
            if(cyfra1>=cyfra2)
            {
                czy=0;
                break;

            }
        }
        if (czy==1)licznik++;
    }
    zadanie<<"Dane 2: "<<licznik<<endl;
    //Dane3
    licznik=0;
    for(int i=0;i<75000;i++)
    {
        dane3>>liczba;
        d=liczba.length();
        for(int j=0;j<d-1;j++)
        {
            czy=1;
            cyfr1=liczba[j];//Musia³em u¿yæ zmiennych typu string ¿eby funkcja istringstream mog³a zadzia³aæ
            cyfr2=liczba[j+1];//Pojedyñczy znak z tablicy string jest traktowany jako char
            istringstream isa(cyfr1);
            isa>>cyfra1;
            istringstream isb(cyfr2);
            isb>>cyfra2;
            if(cyfra1>=cyfra2)
            {
                czy=0;
                break;

            }
        }
        if (czy==1)licznik++;
    }
    zadanie<<"Dane 3: "<<licznik<<endl;
    return 0;
}
