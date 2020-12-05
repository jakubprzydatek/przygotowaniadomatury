#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ifstream boki("boki.txt");
    int i=0;
    string bok;
    int abc[3];
    char bufor;
    while(!boki.eof())
    {

        if(i>2)
        {
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    if(abc[j]>abc[j+1])
                        swap(abc[j], abc[j+1]);
            cout<<abc[0]<<" "<<abc[1]<<" "<<abc[2];
                if(abc[2]<abc[1]+abc[0])
                {
                    cout<<" - moze byc trojkatem"<<endl;
                }
                else
                {
                    cout<<" - nie moze byc trojkatem"<<endl;
                }
            i=0;
        }
        boki>>bok;
        istringstream iss(bok);
        iss>>abc[i];
        i++;


    }
    return 0;
}
