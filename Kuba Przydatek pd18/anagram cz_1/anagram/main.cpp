#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int czy_rowne(string slow[])
{
    for(int i=0;i<4;i++)
    {
        if(slow[i].length()!=slow[i+1].length())
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ifstream dane("anagram.txt");
    ofstream odp("odp_4a.txt");
    string slowa[5];
    int dl[5];
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<5;j++)
        {
            dane>>slowa[j];
        }
        if(czy_rowne(slowa))
        {
            for(int k=0;k<5;k++)
            {
                odp<<slowa[k]<<" ";
            }
            odp<<endl;
        }

    }
    return 0;
}
