#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string dlu;
    int s;
    float abc[100];

    string x,y;
    int xi, yi;
    float dl;
    ifstream dane("dane.txt");
    ofstream wynik1("wynik1.txt");
    ofstream wynik2("wynik2.txt");
    ifstream dlugosci("wynik2.txt");
    ofstream wynik3("wynik3.txt");
    for(int i=0;i<100;i++)
    {
        dane>>x;
        dane>>y;
        if(y=="0")
        {
            wynik1<<x<<" "<<y<<" - prostopadle do osi OX"<<endl;
        }
        if(x=="0")
        {
            wynik1<<x<<" "<<y<<" - prostopadle do osi OY"<<endl;
        }
        istringstream isx(x);
        isx>>xi;
        istringstream isy(y);
        isy>>yi;
        dl=pow(pow(xi,2)+pow(yi,2),(1/2.0));
        dl=roundf(dl*100)/100;
        wynik2<<setprecision(5)<<dl<<endl;

    }
    for (int i=0;i<100;i++)
    {
        dlugosci>>dlu;
        s=dlu.length();
        abc[i]=atof(dlu.c_str());
    }
    for(int i=0;i<100;i++)
    {
        for(int j=1;j<100-1;j++)
        {
            if(abc[j-1]>abc[j])
                swap(abc[j-1], abc[j]);
        }
    }
    for(int i=0;i<100;i++)
    {
        wynik3<<abc[i]<<endl;
    }

    return 0;
}
