#include <iostream>
#include <fstream>
#include<math.h>
using namespace std;

int czy_prostokatny(float xa, float ya, float xb, float yb, float xc, float yc)
{
    float ab=pow((xb-xa),2)+pow((yb-ya),2);
    float ac=pow((xc-xa),2)+pow((yc-ya),2);
    float bc=pow((xc-xb),2)+pow((yc-yb),2);

    if(ab==ac+bc || ac==ab+bc || bc==ab+ac)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}

int main()
{
    ifstream dane("wspolrzedneTR.txt");
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
        if(czy_prostokatny(xa, ya, xb, yb, xc, yc))
        {
            ile++;

        }
    }
    cout<<"Ile prostokatnych: "<<ile<<endl;

    return 0;
}
