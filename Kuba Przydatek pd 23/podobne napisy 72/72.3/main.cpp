#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int najdluzsze_zakonczenie(string s1, string s2)
{
    int dl1=s1.length();
    int dl2=s2.length();
    int n;
    string wynik="";
    if(dl1>dl2)
    {
        n=dl2;
    }
    else
    {
        n=dl1;
    }

    for(int i=1;i<=n;i++)
    {
        if(s1.substr(dl1-i, i)==s2.substr(dl2-i, i))
        {
            wynik=s1.substr(dl1-i, i);
        }
        else
        {
            break;
        }
    }
    return wynik.length();

}

int main()
{
    ifstream napisy("napisy.txt");
    string w1, w2;
    for(int i=0;i<200;i++)
    {
        napisy>>w1;
        napisy>>w2;
        if(najdluzsze_zakonczenie(w1, w2)!=0)
        {
            cout<<najdluzsze_zakonczenie(w1, w2)<<"<-dlugosc zakonczenia||pary-> "<<w1<<" "<<w2<<endl;
        }

    }
    return 0;
}
