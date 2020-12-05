#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int czy_sie_zawiera(string s1, string s2)
{
    int dlu1=s1.length();
    int dlu2=s2.length();
    int czy=0;
    for(int i=0;i<dlu2;i++)
    {
        if(s1[0]==s2[i])
        {
            czy=1;
            for(int j=1;j<dlu1;j++)
            {
                if(s1[j]!=s2[i+j])
                {
                    czy=0;
                    break;
                }
            }
        }
    }

    return czy;
}

int czy_anagram(string s1, string s2)
{
    int dlu1=s1.length();
    int dlu2=s2.length();
    char gwiazdka='*';

    if(dlu1!=dlu2)
    {
        return 0;
    }

    for(int i=0;i<dlu1;i++)
    {
        for(int j=0;j<dlu1;j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]=gwiazdka;
                break;
            }
        }
    }

    for(int i=0;i<dlu1;i++)
    {
        if(s2[i]!=gwiazdka)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    ifstream slowa("slowa.txt");
    ofstream odp("wyniki6.txt");
    odp<<"c) "<<endl;
    string slowo1, slowo2;
    char buf1, buf2;
    char a='A';
    int ile_a=0, ile_b=0, ile_c=0;
    int dl1, dl2;
    for(int i=0;i<1000;i++)
    {
        slowa>>slowo1;
        dl1=slowo1.length();
        buf1=slowo1[dl1-1];
        slowa>>slowo2;
        dl2=slowo2.length();
        buf2=slowo2[dl2-1];

            if(buf1==a)
            {
                ile_a++;
            }
            if(buf2==a)
            {
                ile_a++;
            }

            if(czy_sie_zawiera(slowo1, slowo2))
            {
                ile_b++;
            }

            if(czy_anagram(slowo1, slowo2))
            {
                ile_c++;
                odp<<slowo1<<" "<<slowo2<<endl;
            }
    }
    odp<<"Ilosc par: "<<ile_c<<endl;
    odp<<"a) "<<ile_a<<endl;
    odp<<"b) "<<ile_b<<endl;
    return 0;
}
