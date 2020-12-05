#include <iostream>
#include <string>
using namespace std;
string deszyfr(string slowo)
{
    int dl=slowo.length();
    char znak;
    int k;
    string wynik="";
    for(int i=0;i<dl;i++)
    {
        znak=slowo[i];
        k=i+1;
        znak=znak-65;

        if(znak-k<0)
        {
            k=k%26;

            znak=26-k+65;
        }
        else
        {
            znak=znak-k+65;
        }
        wynik+=znak;
    }
    return wynik;
}
int main()
{




    cout << deszyfr("CKW") << endl;
    return 0;
}
