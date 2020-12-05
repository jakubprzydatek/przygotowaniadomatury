#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("napisy.txt");
    ofstream odp("odpd.txt");
    int ile_dlugosci[17]={0};
    string napis;
    int dl;
    for(int i=0;i<1000;i++)
    {
        dane>>napis;
        dl=napis.length();
        ile_dlugosci[dl]=ile_dlugosci[dl]+1;;
    }
    for(int i=2;i<17;i++)
    {
        odp<<"Dlugosc: "<<i<<" - "<<ile_dlugosci[i]<<endl;
    }
    return 0;
}
