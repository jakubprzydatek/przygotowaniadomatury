#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

long long fib(int n)
{
    if(n<3)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);

}
int main()
{

    long long elementy[46];
    long long liczba, lmin=1000000000, lmax=0;
    long long liczby_fib[200];
    int k=0;
    ifstream dane("dane.txt");
    for(int i=0;i<=45;i++)
    {
        elementy[i]=fib(i);
    }
    //cout<<elementy[45]<<endl;

    for(int i=0;i<200;i++)
    {
        dane>>liczba;
        for(int j=0;j<=45;j++)
        {
            if(liczba==elementy[j])
            {
                //cout<<liczba<<endl;
                liczby_fib[k]=liczba;
                k++;
                if(liczba<lmin)
                {
                    lmin=liczba;
                }
                if(liczba>lmax)
                {
                    lmax=liczba;
                }
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        cout<<liczby_fib[i]<<endl;
    }
    cout<<lmin<<endl;
    return 0;
}
