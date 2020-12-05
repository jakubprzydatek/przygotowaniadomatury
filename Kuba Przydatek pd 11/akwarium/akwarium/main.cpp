#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream tabelka("odpc.txt");
    int max=0;
    int min;
    int ilosc=1000;
    int t=0;

    for(t=0; t<100;t++) //a i sprawdzenie max z b
    {
        if(ilosc>max)
        {
            max=ilosc;
        }
        if(ilosc<50000)
        {
            ilosc=ilosc*2;
        }
        else
        {
            ilosc=ilosc-(0.99*ilosc);
        }
    }
    cout<<"Ilosc po 100t: "<<ilosc<<endl;
    ilosc=1000;
    cout<<"Max: "<<max<<endl;
    min=max;
    for(t=0; t<100;t++) //min z b
    {
        if(ilosc<min)
        {
            min=ilosc;
        }
        if(ilosc<50000)
        {
            ilosc=ilosc*2;
        }
        else
        {
            ilosc=ilosc-(0.99*ilosc);
        }
    }
    cout<<"Minimum: "<<min<<endl;

    ilosc=1000;
    tabelka<<"*t* *ilosc rozwielitek*"<<endl;
    for(t=0;t<=25;t++)
    {
        tabelka<<t<<"   "<<ilosc<<endl;
        if(ilosc<min)
        {
            min=ilosc;
        }
        if(ilosc<50000)
        {
            ilosc=ilosc*2;
        }
        else
        {
            ilosc=ilosc-(0.99*ilosc);
        }
    }

    return 0;
}
