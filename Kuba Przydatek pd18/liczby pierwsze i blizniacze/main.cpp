#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream odpa("odp6a.txt");
    ofstream odpb("odp6b.txt");
    int czy_pierwsza=0, ile_pierwszych=0;
    int poprzednia, aktualna=2;
    for(int i=2;i<=100000;i++)
    {
        czy_pierwsza=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                czy_pierwsza=0;
                break;
            }
        }
        if(czy_pierwsza==1)
        {
            if(i>=500 && i<=1000)
            {
                poprzednia=aktualna;
                aktualna=i;
                if(aktualna-poprzednia==2)
                {
                    odpb<<poprzednia<<" "<<aktualna<<endl;
                }
            }
            ile_pierwszych++;
        }
    }
    odpa<<ile_pierwszych<<endl;
    return 0;
}
