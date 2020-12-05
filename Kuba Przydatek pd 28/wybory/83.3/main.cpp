#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    float wk[5]={0}, max_wk=0;
    int gk[5], nr_km;
    int mk[5]={0};
    string bufor;
    ifstream dane("dane_wybory.txt");
    dane>>bufor;
        for(int j=0;j<5;j++)
        {
            dane>>gk[j];
            mk[j]=0;
        }

        for(int k=0;k<20;k++)
        {
            max_wk=0;

            for(int j=0;j<5;j++)
            {
                wk[j]=gk[j]/(2*mk[j]+1);
                if(wk[j]>max_wk)
                {
                    max_wk=wk[j];
                    nr_km=j;
                }
            }
            mk[nr_km]++;
    }
        for(int j=0;j<5;j++)
            {
                cout<<"Komitet: "<<j+1<<" ilosc mandatow: "<<mk[j]<<endl;
            }
    return 0;
}
