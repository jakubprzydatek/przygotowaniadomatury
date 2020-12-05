#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dni=154;
    double skosz_trawa=10000;
    int samochody=30;
    //a)
    for(int i=0;i<dni;i++)
    {
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia
        if(i+1==9)
        {
            cout<<"Z nocy z 9 na 10 kwietnia objetosc zmniejszy sie: "<<floor((0.03*skosz_trawa))<<endl;
        }
        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));


    }
    skosz_trawa=10000;
    //b1)
    for(int i=0;i<dni;i++)
    {
        cout<<"Dzien "<<i+1<<" skoszona trawa rano "<<skosz_trawa<<endl;
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia

        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));


    }
       skosz_trawa=10000;
    //b2)
    for(int i=0;i<dni;i++)
    {
        cout<<"Dzien "<<i+1<<" skoszona trawa rano "<<skosz_trawa<<endl;
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia

        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));


    }


    return 0;
}
