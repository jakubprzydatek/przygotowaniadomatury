#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int czy_para(float x1, float y1, float x2, float y2)
{
    if(x1+x2==0 && y1-y2==0)
    {
        return 1;
    }
    else if(x1-x2==0 && y1+y2==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    ifstream dane("okregi.txt");
    float x[2000], y[2000], r[2000];
    int ile_par=0;
    for(int i=0;i<2000;i++)
    {
        dane>>x[i];
        dane>>y[i];
        dane>>r[i];

    }
    for(int i=0;i<2000;i++)
    {
        for(int j=i+1;j<2000;j++)
        {
            if(r[i]==r[j])
            {
                if(czy_para(x[i], y[i], x[j], y[j]))
                {
                    ile_par++;
                    //cout<<x[i]<<" "<<" "<<y[i]<<" "<<x[j]<<" "<<y[j]<<endl;
                }
            }
        }
    }

    cout<<"Lustrzanych par: "<<ile_par<<endl;

    cout<<czy_para(5,6,5,-6);
    return 0;
}
