#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dane("dane_obrazki.txt");
    char bf[20][20];
    int dl;
    int k=0;
    while(k<1)
    {
        for(int i=0;i<19;i++)
        {
            for(int j=0;j<19;j++)
            {
                dane>>bf[i][j];
                cout<<bf[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        k++;

    }
    return 0;
}
