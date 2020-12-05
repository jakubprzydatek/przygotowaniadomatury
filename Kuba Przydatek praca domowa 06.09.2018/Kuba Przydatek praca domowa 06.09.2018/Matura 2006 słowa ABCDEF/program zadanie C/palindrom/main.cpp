#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string bufor, antybufor;
    int d,i,j;
    ifstream dane("dane.txt");
    ofstream palindrom("palindromy.txt");
        while(!dane.eof())
        {
            antybufor="";
            dane>>bufor;
            d=bufor.length();
            for(i=0;i<d;i++)
            {
                antybufor+=bufor[d-i-1];
            }
            if(bufor==antybufor)
            {
                palindrom<<bufor<<endl;
            }
        }

    return 0;
}
