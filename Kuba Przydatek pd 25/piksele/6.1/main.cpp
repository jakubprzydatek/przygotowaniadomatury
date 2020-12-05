#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream dane("dane.txt");
    int liczba, najciemniejszy=300, najjasniejszy=0;

    for(int i=0;i<200;i++)
    {
        for(int j=0;j<320;j++)
        {
            dane>>liczba;
            if(liczba<najciemniejszy)
            {
                najciemniejszy=liczba;
            }
            if(liczba>najjasniejszy)
            {
                najjasniejszy=liczba;
            }
        }
    }
    cout<<"Najjasniejszy: "<<najjasniejszy<<endl<<"Najciemniejszy: "<<najciemniejszy<<endl;
    return 0;
}
