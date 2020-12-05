#include <iostream>
#include <fstream>

using namespace std;
int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a=a-b;
       else
           b=b-a;
    return a;
}

int main()
{
    int a, b;
    int tab1[500];
    int tab2[1000];
    int tab3[75000];
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");
    ifstream dane3("dane3.txt");
    ofstream zadanie("zadanie4.txt");
    //dane1
    for(int i=0;i<500;i++)
    {
        dane1>>tab1[i];
    }
    int nwd1=NWD(tab1[0],tab1[1]);
    for(int i=2;i<500;i++)
    {
        nwd1=NWD(nwd1, tab1[i]);
    }
    zadanie<<"NWD 1 plik: "<<nwd1<<endl;
    //dane2
    for(int i=0;i<1000;i++)
    {
        dane2>>tab2[i];
    }
    int nwd2=NWD(tab2[0],tab2[1]);
    for(int i=2;i<1000;i++)
    {
        nwd2=NWD(nwd2, tab2[i]);
    }
    zadanie<<"NWD 2 plik: "<<nwd2<<endl;
    //dane3
    for(int i=0;i<75000;i++)
    {
        dane3>>tab3[i];
    }
    int nwd3=NWD(tab3[0],tab3[1]);
    for(int i=2;i<75000;i++)
    {
        nwd3=NWD(nwd3, tab3[i]);
    }
    zadanie<<"NWD 3 plik: "<<nwd3<<endl;


    return 0;
}
