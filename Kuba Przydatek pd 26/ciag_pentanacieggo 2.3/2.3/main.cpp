#include <iostream>

using namespace std;

int main()
{
    int suma=0;
    int r[6]={0,1,1,0,0,0};
    for(int i=0;i<5;i++)
    {
        suma+=r[i];
    }
    r[5]=suma%2;

    int n;
    cin>>n;

    cout<<"Wartosc ciagu wynosi: "<<r[n%6]<<endl;
    return 0;
}
