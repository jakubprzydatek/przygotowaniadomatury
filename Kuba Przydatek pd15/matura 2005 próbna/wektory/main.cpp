#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    double dl;
    double dlugosci[100];
    int k=0;
    ifstream dane("dane.txt");
    ofstream wynik1("wynik1.txt");
    ofstream wynik2("wynik2.txt");
    ofstream wynik3("wynik3.txt");
    int x, y;
    int licznik1=0;
    for(int i=0;i<100;i++)
    {
        dane>>x;
        dane>>y;
        dl=sqrt(pow(x,2)+pow(y,2));
        if(x==0 || y==0)
        {
            wynik1<<x<<" "<<y<<endl;
            licznik1++;
        }
        wynik2<<(round(dl*100)/100)<<endl;
        dlugosci[k]=(round(dl*100)/100);
        k++;
    }
    for(int i=0;i<100;i++)
    {
        for (int j=1;j<100;j++)
        {
            if(dlugosci[j]<dlugosci[j-1])
            {
                swap(dlugosci[j-1],dlugosci[j]);
            }
        }
    }
    for(int i=0;i<100;i++)
    {
        wynik3<<dlugosci[i]<<endl;
    }
    wynik1<<licznik1;
    return 0;
}
