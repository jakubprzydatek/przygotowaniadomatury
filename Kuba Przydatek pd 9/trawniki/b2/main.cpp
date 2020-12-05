#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dni=154;
    double skosz_trawa=10000;
    int samochody=30;
    while(skosz_trawa>0 || samochody>350 )
        {
            skosz_trawa=10000;
            samochody++;

            for(int i=0;i<12;i++)
            {
                skosz_trawa=skosz_trawa-(samochody*15);
                if(skosz_trawa<=0)break;
                skosz_trawa=skosz_trawa+600;
                skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));
            }
        }
    cout<<"Ilosc samochodow potrzebna do wywiezenia calej trawy 12 kwietnia: "<< samochody<<endl;
}
