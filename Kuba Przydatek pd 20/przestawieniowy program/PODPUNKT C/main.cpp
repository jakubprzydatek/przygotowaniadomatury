#include <iostream>
#include <string>
using namespace std;

string pozamieniaj(string s)
{
    int dl = s.length();
    int czy_p=0;
    if(dl%2==1)
    {
        czy_p=1;
    }
    for(int i=0;i<dl-czy_p;i+=2)
    {
        swap(s[i],s[i+1]);
    }
    return s;
}

int main()
{
    cout << pozamieniaj("MOTOR") << endl;
    cout << pozamieniaj("MATURA") << endl;
    return 0;
}
