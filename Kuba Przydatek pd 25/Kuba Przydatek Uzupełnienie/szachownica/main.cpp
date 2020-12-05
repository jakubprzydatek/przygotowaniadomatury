#include <iostream>
#include <string>
using namespace std;

int ile_pol(int n, int x, int y)
{
    int suma=0;
    suma=2*(n-1);
    int i=x-1, j=y-1;
    while(i>0 && j>0)
    {
        i--;
        j--;
        suma+=1;
    }
    i=x-1; j=y-1;
    while(i<n-1 && j<n-1)
    {
        i++;
        j++;
        suma+=1;
    }
    i=x-1; j=y-1;
    while(i<n-1 && j>0)
    {
        i++;
        j--;
        suma+=1;
    }
    i=x-1; j=y-1;
    while(i>0 && j<n-1)
    {
        i--;
        j++;
        suma+=1;
    }


    return suma;

}

int main()
{
    //n rozmiar pola, x,y wspolrzedne pionka
    cout << ile_pol(5, 1, 1) << endl;
    return 0;
}
