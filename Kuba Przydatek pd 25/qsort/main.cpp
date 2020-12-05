#include <iostream>

using namespace std;

int main()
{
    //2.1
    int a[6]={4,6,3,5,2,1};
    int n=6;
    int klucz=a[0];
    int w=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]<klucz)
        {
            swap(a[w],a[i]);
            w++;
        }
    }
    for(int
         i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}
