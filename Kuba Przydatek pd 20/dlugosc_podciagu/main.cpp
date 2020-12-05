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
    float odp_a=0;
    float aktualny_podciag=0;
    float dl_akt_podciagu=0;
    float max_skok=0;
    float min_skok=1000;
    for(int i=0;i<310;i++)
    {
        if(skoki[i]>max_skok)
        {
            max_skok=skoki[i];
        }
        if(skoki[i]<min_skok)
        {
            min_skok=skoki[i];
        }




        if(skoki[i]>aktualny_podciag)
        {
            aktualny_podciag=skoki[i];
            dl_akt_podciagu++;
        } else
        {
            if(dl_akt_podciagu>3)
            {
                odp_a++;
            }
            aktualny_podciag=skoki[i];
            dl_akt_podciagu=1;
        }
    }
    cout<<odp_a<<endl;
    cout<<max_skok<<endl;
    cout<<min_skok<<endl;

    return 0;
}
