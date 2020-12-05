#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int czy_anagram(string slowo1, string slowo2)
{
    char szpacja='*';
    if(slowo1.length()!=slowo2.length())
    {
        return 0;
    }
    int dl1=slowo1.length();
    for(int i=0;i<dl1;i++)
    {
        for(int j=0;j<dl1;j++)
        {
            if(slowo1[i]==slowo2[j])
            {
                slowo2[j]=szpacja;
                break;
            }
        }
    }
    for(int k=0;k<dl1;k++)
    {
        if(slowo2[k]!=szpacja)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ifstream dane("anagram.txt");
    ofstream odp("odp_4b.txt");
    string slowa[4], slowo;
    int licznik;
    for(int i=0;i<200;i++)
    {
        licznik=0;
        dane>>slowo;
        for(int j=0;j<4;j++)
        {
            dane>>slowa[j];
            if(czy_anagram(slowo, slowa[j]))
            {
                licznik++;
            }
        }
        if(licznik==4)
        {
            odp<<slowo<<" ";
            for(int k=0;k<4;k++)
            {
                odp<<slowa[k]<<" ";
            }
            odp<<endl;
        }
    }
    return 0;
}
