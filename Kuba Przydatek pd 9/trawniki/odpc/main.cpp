#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dni=100;
    double skosz_trawa=10000;
    int samochody=30;
    for(int i=0;i<dni;i++)
    {
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia
        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));
    }
    cout<<"Trawa zgromadzona po 100 dniach dla 10000m3: "<<skosz_trawa<<endl;
    skosz_trawa=7000;
    for(int i=0;i<dni;i++)
    {
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia
        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));
    }
    cout<<"Trawa zgromadzona po 100 dniach dla 7000m3: "<<skosz_trawa<<endl;
    skosz_trawa=4000;
    for(int i=0;i<dni;i++)
    {
        skosz_trawa=skosz_trawa-(samochody*15); //wywoz przed poludniem
        skosz_trawa=skosz_trawa+600; //przyrost skoszonej trawy w ciagu dnia
        skosz_trawa=skosz_trawa-floor((0.03*skosz_trawa));
    }
    cout<<"Trawa zgromadzona po 100 dniach dla 4000m3: "<<skosz_trawa<<endl;
    return 0;
}
