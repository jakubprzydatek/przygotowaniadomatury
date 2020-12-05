#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

float czy_punkt_wspolny(float x1, float y1, float r1, float x2, float y2 ,float r2)
{
    float odleglosc=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    if(fabs(odleglosc)==fabs(r2-r1))
    {
        return 1;
    } else if(fabs(odleglosc)==r2+r1)
    {
        return 1;
    } else if(fabs(r2-r1)<fabs(odleglosc) && fabs(odleglosc)<r2+r1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    //return odleglosc;

}


int main()
{
    ifstream dane("okregi.txt");
    float x[1000], y[1000], r[1000];
    int ile_par=0, akt_dl_ciagu=1, max_dl_ciagu=1;
    for(int i=0;i<1000;i++)
    {
        dane>>x[i];
        dane>>y[i];
        dane>>r[i];

    }
    for(int i=0;i<999;i++)
    {
        if(czy_punkt_wspolny(x[i], y[i], r[i], x[i+1], y[i+1], r[i+1]))
        {
            akt_dl_ciagu++;
        } else
        {
            if(max_dl_ciagu<akt_dl_ciagu)
            {
                max_dl_ciagu=akt_dl_ciagu;
            }
            akt_dl_ciagu=1;

        }
    }
    cout<<max_dl_ciagu<<endl;
    return 0;
}
