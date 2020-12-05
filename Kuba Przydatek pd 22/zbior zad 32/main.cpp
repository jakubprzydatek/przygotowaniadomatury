#include <iostream>
#include <string>
using namespace std;



string skrot(string slowo)
{
    int dl=slowo.length();
    string bf, wynik=""; char nawiasl='(', nawiasp=')';
    char bufor=slowo[0]; int pocz=0;
    for(int i=1;i<dl;i++)
    {
       if(slowo[i]==bufor)
       {
           if(slowo.substr(pocz, i-pocz) == slowo.substr(i, i-pocz))
           {
               bf=slowo.substr(pocz, i-pocz);
               wynik=wynik+nawiasl+bf+nawiasp+slowo.substr(2*i+pocz, dl-i*2);
               bufor=slowo[2*i];
               int pocz=2*i;
               i=i*2+1;
               cout<<slowo.substr(pocz, i-pocz)<<" "<<slowo.substr(i, i-pocz)<<endl;
           }
       }
    }
    return wynik;
}





int main()
{
    string slowo="ABCABCDD";
    int dl=slowo.length();

    cout << skrot(slowo) << endl;
    return 0;
}
