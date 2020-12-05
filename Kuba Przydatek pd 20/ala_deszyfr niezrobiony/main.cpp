#include <iostream>
#include <string>
using namespace std;

int main()
{
    int k=3;
    string szyfr="IOAKNRTAFMY";
    string slowo="";
    int dl=szyfr.length();
    cout<<dl<<endl;
    int s;
    if(dl%k!=0)
    {
        s=dl%k;
    }
    for(int i=0;i<k+s;i++)
    {

        for(int j=i;j<dl;j+=k+1)
        {
            cout<<szyfr[j]<<endl;
            slowo+=szyfr[j];
        }
    }
    cout<<slowo<<endl;
    return 0;
}
