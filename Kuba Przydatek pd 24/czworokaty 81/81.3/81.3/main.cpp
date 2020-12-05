#include <iostream>
#include <fstream>
#include<math.h>
using namespace std;

float obwod(float xa, float ya, float xb, float yb, float xc, float yc)
{
    float ab=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
    float ac=sqrt(pow((xc-xa),2)+pow((yc-ya),2));
    float bc=sqrt(pow((xc-xb),2)+pow((yc-yb),2));

    return (ab+ac+bc);


}

int main()
{
    ifstream dane("wspolrzedneTR.txt");
    float xa, ya, xb, yb, xc, yc;
    float max_ob=0, mxa, mya, mxb, myb, mxc, myc;
    for(int i=0;i<100;i++)
    {
        dane>>xa;
        dane>>ya;
        dane>>xb;
        dane>>yb;
        dane>>xc;
        dane>>yc;
        //cout<<xa<<" "<<ya<<" "<<xb<<" "<<yb<<" "<<xc<<" "<<yc<<endl;
        if(obwod(xa, ya, xb, yb, xc, yc)>max_ob)
        {
            max_ob=round(obwod(xa, ya, xb, yb, xc, yc)*100)/100;
            mxa=xa; mya=ya; mxb=xb; myb=yb; mxc=xc; myc=yc;

        }
    }
    cout<<"Max obwod: "<<max_ob<<endl;
    cout<<"Wspolrzedne: "<<mxa<<" "<<mya<<" "<<mxb<<" "<<myb<<" "<<mxc<<" "<<myc<<endl;

    return 0;
}
