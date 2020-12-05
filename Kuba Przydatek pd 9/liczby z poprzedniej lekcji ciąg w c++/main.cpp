#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    ifstream liczby("liczby.txt");
    string liczba;
    float bufor;
    while(!liczby.eof())
    {
        liczby>>liczba;
        bufor=strtof(liczba);  //nie wiem jak poradzic sobie z konwersja string to float
        cout<<bufor<<endl;
    }
    return 0;
}
