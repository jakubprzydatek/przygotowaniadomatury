#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
float obl_bmi(float wzrost, float waga)
{
    wzrost=pow((wzrost/100),2);
    float bmi=waga/wzrost;
    return bmi;
}
int main()
{
    ifstream dane("bmi.txt");
    float wzrost, waga;
    float maxbmi=0;
    float minbmi=150;
    float bmi;
    int niedowaga=0;
    int prawidlowa_masa=0;
    int nadwaga=0;
    int otylosc=0;
    int duza_otylosc=0;
    for(int i=0;i<1000;i++)
    {
        dane>>wzrost;
        dane>>waga;
        bmi=obl_bmi(wzrost, waga);
        bmi=round(bmi*100)/100;
        if(bmi>maxbmi)
        {
            maxbmi=bmi;
        }
        if(bmi<minbmi)
        {
            minbmi=bmi;
        }
        if(bmi<18.5)
        {
            niedowaga++;
        } else if(bmi>=18.5 && bmi <25)
        {
            prawidlowa_masa++;
        } else if(bmi>=25&&bmi<30)
        {
            nadwaga++;
        } else if(bmi>=30 && bmi<40)
        {
            otylosc++;
        } else
        {
            duza_otylosc++;
        }

    }
    cout<<"Niedowaga: "<<niedowaga<<endl;
    cout<<"Prawidlowa masa ciala: "<<prawidlowa_masa<<endl;
    cout<<"Nadwaga: "<<nadwaga<<endl;
    cout<<"Otylosc: "<<otylosc<<endl;
    cout<<"Duza otylosc: "<<duza_otylosc<<endl;
    cout<<"Max bmi: "<<maxbmi<<endl;
    cout<<"Min bmi: "<<minbmi<<endl;

    return 0;
}
