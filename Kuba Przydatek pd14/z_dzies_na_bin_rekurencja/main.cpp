#include <iostream>

using namespace std;
string z_dzies_na_bin(int dziesietna)
{
    string liczba="";
    if(dziesietna==0) return liczba;
    if(dziesietna%2==0)
    {
        liczba="0";
    }
    else
    {
        liczba="1";
    }
    return z_dzies_na_bin(dziesietna/2)+liczba;
}
int main()
{
    cout << z_dzies_na_bin(10) << endl;
    return 0;
}
