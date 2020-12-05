#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int czy_palindrom(string s)
{
    string odwrocone="";
    int dl=s.length();
    for(int i=dl-1;i>=0;i--)
    {
        odwrocone=odwrocone+s[i];
    }
    if(s==odwrocone)
    {
        return 1;
    }
    return 0;
}

int czy_sie_zawiera(string s1, string s2)
{
    if(s1==s2)
    {
        return 1;
    }
    int dl1=s1.length();
    int dl2=s2.length();
    int czy=0;
    for(int i=0;i<dl1;i++)
    {
        if(s2[0]==s1[i])
        {
            czy=1;
            for(int j=1;j<dl2;j++)
            {
                if(s2[j]!=s1[i+j])
                {
                    czy=0;
                    break;
                }
            }
            if(czy==1)
            {
                return 1;
            }
        }
    }
    return czy;
}

int main()
{
    ifstream dane("dane.txt");
    string slowo1, slowo2;

    int ile_palindrom=0, ile_zawartych=0;
    for(int i=0;i<200;i++)
    {
        dane>>slowo1;
        dane>>slowo2;
        if(czy_palindrom(slowo1))
        {
            ile_palindrom++;
        }
        if(czy_palindrom(slowo2))
        {
            ile_palindrom++;
        }
        if(czy_sie_zawiera(slowo1, slowo2)==1)
        {
            ile_zawartych++;
        }

    }

    cout<<ile_palindrom<<" palindromow"<<endl;
    cout<<ile_zawartych<<" slow B zawartych w slowie A"<<endl;
    // niestety nie zdazylem dluzej posiedziec nad tym zadaniem
    return 0;
}
