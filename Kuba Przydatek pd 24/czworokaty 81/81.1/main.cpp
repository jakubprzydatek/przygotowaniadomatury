#include <iostream>
#include <fstream>
using namespace std;

int czy_w_i_cwiartce(float x, float y)
{
    if(x<=0 || y<=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    ifstream dane("wspolrzedne.txt");
    float xa, ya, xb, yb, xc, yc;
    int ile=0;
    for(int i=0;i<100;i++)
    {
        dane>>xa;
        dane>>ya;
        dane>>xb;
        dane>>yb;
        dane>>xc;
        dane>>yc;
        //cout<<xa<<" "<<ya<<" "<<xb<<" "<<yb<<" "<<xc<<" "<<yc<<endl;
        if(czy_w_i_cwiartce(xa, ya)==1 && czy_w_i_cwiartce(xb,yb)==1 && czy_w_i_cwiartce(xc,yc)==1)
        {
            ile++;
        }
    }
    cout<<ile<<endl;
    return 0;
}
