#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string slowo="JEST OK", klucz="EWA", wynik="";
    char znak, znak_klucz;
    int k, dls=slowo.length(), dlk=klucz.length(), kontrolka=0;
    char spacja=' ';
    for(int i=0;i<dls;i++)
    {
        if(slowo[i]!=spacja)
        {
            znak=slowo[i];
            znak_klucz=klucz[kontrolka];
            kontrolka+=1;
            k=znak_klucz-65;
            cout<<kontrolka<<" "<<znak_klucz<<" "<<k<<endl;
            znak=znak-65;
            znak=(znak+k)%26+65;
            wynik+=znak;
        }
        else
        {
            wynik+=spacja;
        }
        if(kontrolka==dlk)
        {
            kontrolka=0;
        }

    }
    cout << wynik << endl;
    return 0;
}
