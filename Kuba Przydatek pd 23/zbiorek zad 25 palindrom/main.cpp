#include <iostream>
#include <string>
using namespace std;

int czy_palindrom(string slowo)
{
   int dl=slowo.length();
   string odwrocone="";

   for(int i=dl-1;i>=0;i--)
   {
       odwrocone+=slowo[i];
   }
   if(odwrocone==slowo) return 1;

   return 0;
}

int main()
{

    //odp 25.1 na przyklad slowo ABCDAECBA
    cout << czy_palindrom("ABBA") << endl;
    return 0;
}
