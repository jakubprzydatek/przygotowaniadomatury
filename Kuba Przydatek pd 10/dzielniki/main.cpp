#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: " << endl;
    cin>>liczba;
    int dzielnik=2;

    while(liczba>1)
    {
        while(liczba%dzielnik==0)
        {
            cout<<dzielnik<<endl;
            liczba=liczba/dzielnik;
        }
        dzielnik++;
    }
    return 0;
}
