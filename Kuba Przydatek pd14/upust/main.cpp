#include <iostream>

using namespace std;

int main()
{
    float a, b;
    for(int i=10;i<=1000;i++)
    {

        if(i<=500)
        {
            a=i*((1-0.15)*12);
        } else
        {
            a=i*((1-0.25)*12);
        }
        if(i<=300)
        {
            b=i*((1-0.1)*12);
        } else if(i>300 && i<=600)
        {
            b=300*(1-0.1)*12+(i-300)*(1-0.25)*12;
        } else
        {
            b=i*((1-0.35)*12);
        }
        if(a<b) // odp a
        {
        cout<<"Dla x rownego "<<i<<" cena jest nizsza u producenta A"<<endl;
        }
        if(a==b) // odp b
        {
        cout<<"Dla x rownego "<<i<<" wybor nie ma znaczenia"<<endl;
        }
    }
    return 0;
}
