#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_dwucykliczne(string s)
{
    string s1, s2;
    int dl=s.length();
    //if(dl%2!=0) return 0;
    s1=s.substr(0,dl/2);
    s2=s.substr(dl/2, dl/2);

    /*for(int i=0;i<dl/2;i++)
    {
        if(s[i]!=s[dl-i-1]) return 0;
    }
    return 1;*/
    if(s1==s2) return 1;
    return 0;
}

int main()
{
    ifstream dane("binarne.txt");
    string napis, naj_napis;
    int dl, max_dl=0, ile=0;
    for(int i=0;i<500;i++)
    {
        dane>>napis;

        if(czy_dwucykliczne(napis))
        {
            dl=napis.length();
            ile++;
            if(dl>max_dl)
            {
                naj_napis=napis;
                max_dl=dl;

            }
        }
    }
    cout << "Slow dwucyklicznych: "<< ile << endl;
    cout<<"Nadjluzsze slowo i jego dlugosc: "<<naj_napis<<" "<<max_dl<<endl;
    return 0;
}
