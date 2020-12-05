#include <iostream>
#include <string>
using namespace std;

int czy_slaby_a_palindrom(string s)
{
    int dl=s.length(), dl1;
    string w1="", w2="";
    int czy=1, war1=0, war2=0;
    for(int i=0;i<dl;i++)
    {
        if(s[i]!='A')
        {
            czy=0;
            break;
        }
    }
    if(czy==1) return 1;

    if(dl%2==0)
    {
        if(s[0]==s[dl-1])
        {
            war1=1;
        }
        czy==1;
        w1=s.substr(0,dl/2);
        w2=s.substr(dl/2, dl/2);
        dl1=dl/2;
        for(int i=0;i<dl1;i++)
        {
            if(w1[i]!='A')
            {
                czy=0;
                break;
            }
        }
        if(czy==1) war2=1;
        for(int i=0;i<dl1;i++)
        {
            if(war2==1) break;
            if(w1[i]!='A')
            {
                czy=0;
                break;
            }
        }
        if(czy==1) war2=1;
        if(w1[0]==w1[dl1-1] || w2[0]==w2[dl1-1]) war2=1;


    }
    return war1*war2;
}


int main()
{
    cout << czy_slaby_a_palindrom("AAABBAAA") << endl;
    return 0;
}
