#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe:" << endl;
    cin>>liczba;
    int bufor=liczba;
    int dzielnik=2;
    int suma=0;

    while(liczba>1)
    {
        while(liczba%dzielnik==0)
        {
            cout<<"Dzielnik: "<<dzielnik<<endl;
            liczba/=dzielnik;
            if(dzielnik<bufor)suma=suma+dzielnik;
        }
        dzielnik++;
    }
    if(bufor==suma+1)
    {
        cout<<"Liczba doskonala"<<endl;
    }
    return 0;
}
