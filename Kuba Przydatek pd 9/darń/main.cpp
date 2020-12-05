#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

float f(double x)
{
    return fabs(pow(x,2)-36);
}
int main()
{
    ofstream odp("RaportD.txt");
    double a=0;
    double o=6;
    double b=10;
    double h=0.001;
    double x=a;
    double s=0;
    while(x<b)
    {
        s=s+h*(f(x)+f(x+h))/2;
        x=x+h;
    }
    double r=0.5*4;
    odp<<"a) Nale¿y zakupiæ rolek:"<<endl<<ceil(s/r)<<endl;
    return 0;
}
