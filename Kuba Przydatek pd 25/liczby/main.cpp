#include <iostream>

using namespace std;

int main()
{

    //2.2
    int tab[5]={0, 1, 1, 2, 4};
    int i=5;
    int temp;
    int w;
    for(int i=5; i<=7;i++)
    {
        temp=tab[0]+tab[1]+tab[2]+tab[3]+tab[4];
        cout<<i%5<<endl;
        tab[i%5]=temp;
        w=tab[i%5];
    }
    cout<<w<<endl;



    //2.3
    int r[5]={0,1,1,0,0}; //nie rozumiem algorytmu
    return 0;
}
