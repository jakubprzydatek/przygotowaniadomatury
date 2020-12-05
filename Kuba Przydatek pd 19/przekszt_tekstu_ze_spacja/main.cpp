#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

string przeksztalc(string slowo)
{
    string myslnik="-";
    int dl=slowo.length();
    string przeksztalc=slowo[0]+myslnik+slowo[dl-1];
    return przeksztalc;
}

int main()
{
    ifstream dane1("dane1.txt");
    int cyfra;
    string zdanie;
    string liczba;
    getline(dane1, liczba);
    getline(dane1, zdanie);
    cout<<zdanie<<endl;
    istringstream iss(liczba);
    iss>>cyfra;


    string wynik[cyfra];
    char spacja=' ';
    int dl=zdanie.length();
    int k=0;

    for(int i=0;i<dl;i++)
    {

        if(zdanie[i]==spacja)
        {
            k++;
            continue;
        }
        wynik[k]+=zdanie[i];
    }

    for(int i=0;i<cyfra;i++)
    {
        cout<<przeksztalc(wynik[i])<<" ";
    }
    return 0;
}
