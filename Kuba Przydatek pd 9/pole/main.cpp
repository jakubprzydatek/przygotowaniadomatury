#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
    return pow(x,2);
}
int main()
{
    double a=-1;
    double b=1;
    double h=0.001;
    double s=0;
    double x=a;
    while(x<b)
    {
        s=s+h*(f(x)+f(x+1))/2;
        x=x+h;
    }
    cout<<round(s*10000)/10000<<endl;
    return 0;
}
