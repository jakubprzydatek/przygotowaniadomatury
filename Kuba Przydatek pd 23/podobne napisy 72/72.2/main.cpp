#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int czy_mozna(string s1, string s2)
{
    string bufor;
    int dl1=s1.length(), dl2=s2.length();
    if(dl2<dl1) return 0;
    bufor=s2.substr(dl1, dl2-dl1);
    s1+=bufor;
    if(s1==s2) return 1;

    return 0;

}

int main()
{
    ifstream napisy("napisy.txt");
    string w1, w2;
    int dl;
    for(int i=0;i<200;i++)
    {
        napisy>>w1;
        dl=w1.length();
        napisy>>w2;
        if(czy_mozna(w1, w2))
        {
            cout<<w1<<" "<<w2<<endl;
            w2=w2.erase(0,dl);
            cout<<"Nalezy dopisac: "<<w2<<endl;
            cout<<endl;
        }

    }
    return 0;
}
