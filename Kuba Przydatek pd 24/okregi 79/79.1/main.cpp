#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int ktora_cwiartka(float x, float y, float r)
{
    float granicax=fabs(x);
    float granicay=fabs(y);

    if(r>=granicax || r>=granicay)
    {
        return 0;
    } else if(x>0 && y>0)
    {
        return 1;
    } else if(x<0 && y>0)
    {
        return 2;
    } else if(x<0 && y<0)
    {
        return 3;
    } else if(x>0 && y<0)
    {
        return 4;
    }

}

int main()
{
    ifstream dane("okregi.txt");
    float x, y, r;
    int ile_0=0, ile_1=0, ile_2=0, ile_3=0, ile_4=0;
    for(int i=0;i<2000;i++)
    {
        dane>>x;
        dane>>y;
        dane>>r;
        if(ktora_cwiartka(x,y,r)==0)
        {
            ile_0++;
        } else if(ktora_cwiartka(x,y,r)==1)
        {
            ile_1++;
        } else if(ktora_cwiartka(x,y,r)==2)
        {
            ile_2++;
        } else if(ktora_cwiartka(x,y,r)==3)
        {
            ile_3++;
        } else if(ktora_cwiartka(x,y,r)==4)
        {
            ile_4++;
        }
    }

    cout<<"Cwiartka I: "<<ile_1<<endl;
    cout<<"Cwiartka II: "<<ile_2<<endl;
    cout<<"Cwiartka III: "<<ile_3<<endl;
    cout<<"Cwiartka IV: "<<ile_4<<endl;
    cout<<"brak: "<<ile_0<<endl;
    return 0;
}
