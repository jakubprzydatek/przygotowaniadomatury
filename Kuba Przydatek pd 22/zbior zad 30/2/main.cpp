#include <iostream>
#include <string>
using namespace std;

string szyfruj(string slowo)
{
    int dl=slowo.length();
    int k;
    char bufor;
    string wynik="";
    for(int i=0;i<dl;i++)
    {
        bufor=slowo[i];
        k=i+1;

        bufor=bufor-65;
        bufor=(bufor+k)%26+65;

        wynik+=bufor;
    }
    return wynik;
}

int main()
{
    cout << szyfruj("BIT") << endl;
    return 0;
}
