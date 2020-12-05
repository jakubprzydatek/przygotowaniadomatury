#include <iostream>
#include <math.h>
//nie umiem sprawdzic czy funkcja dziala
using namespace std;
int x=2;
double fn(int y)
{
    return y*y-2;
}
double szuk_zer_f(int a, int b, float eps)
{
    if(fabs((a-b))<eps) return a;
    if(fn(x)==0) return x;
    if((fn(x)*fn(a))<0) {return szuk_zer_f(a, x, eps);}
    if((fn(x)*fn(b))<0) {return szuk_zer_f(x, b, eps);}
}
int main()
{
    cout<<fn(x)<<endl;
    cout<<szuk_zer_f(0, 10, 0.000001)<<endl;
    return 0;
}
