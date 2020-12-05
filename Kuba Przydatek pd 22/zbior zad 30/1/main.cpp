#include <iostream>

using namespace std;
char szyfruj(char znak, int klucz)
{
    char wynik=znak-65;
    wynik=(wynik+klucz)%26+65;
    return wynik;
}
int main()
{
    char znak='M';
    int k=327;


    cout<<szyfruj(znak, k);
    return 0;
}
