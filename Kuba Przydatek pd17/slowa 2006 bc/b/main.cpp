#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("dane.txt");
    string slowo;
    int dl;
    int ile=0;
    for(int i=0;i<1000;i++)
    {
        dane>>slowo;
        dl=slowo.length();
        if(slowo[dl-1]=='A' || slowo[dl-1]=='C' || slowo[dl-1]=='E')
        {
            ile++;
        }
    }
    cout<<"Parzystych liczb w pliku: "<<ile<<endl;
    return 0;
}
