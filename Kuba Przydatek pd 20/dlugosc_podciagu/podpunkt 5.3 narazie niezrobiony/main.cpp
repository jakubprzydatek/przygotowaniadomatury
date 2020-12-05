#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream dziennik("dziennik.txt");
    float skoki[310];
    for(int i=0;i<310;i++)
    {
        dziennik>>skoki[i];
    }

    int akt_wyraz=0, pop_wyraz=0, pierwszy_wyraz, ostatni_wyraz, dl_akt_ciagu=0;
    int max_dl=0, max_pocz, max_kon;
    for(int i=4;i<310;i++)
    {
        akt_wyraz=skoki[i];
        cout<<akt_wyraz<<endl;


        if(dl_akt_ciagu==0)
        {
           pierwszy_wyraz=akt_wyraz;
        }
       if(akt_wyraz>pop_wyraz)
       {
           dl_akt_ciagu++;

       }

       if(akt_wyraz<=pop_wyraz)
       {
           ostatni_wyraz=pop_wyraz;
           if(max_dl<dl_akt_ciagu)
           {
               //cout<<"tu szukaj"<<endl;
               max_dl=dl_akt_ciagu;
               max_pocz=pierwszy_wyraz;
               max_kon=ostatni_wyraz;
               pierwszy_wyraz=akt_wyraz;
           }
           dl_akt_ciagu=1;
       }

       pop_wyraz=akt_wyraz;
    }

    cout<<"Sesja trwala: "<<max_dl<<" Poprawil o: "<<max_kon-max_pocz<<endl;


    return 0;
}
