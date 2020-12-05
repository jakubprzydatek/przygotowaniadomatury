#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int T[5];
    int i=0;
    bool ok=true;
    for(i=0;i<n;i++)
    {
        cout<<"Podaj wyraz ciagu: "<<endl;
        cin>>T[i];
    }
    i=0;
    while(i<(n-1) && ok==true)
    {
        if(T[i]>=T[i+1])
        {
            ok=false;
        } else
        {
            i=i+1;
        }

    }
    if(ok==true)
    {
        cout<<"tak";
    } else {
    cout<<"nie";}
    return 0;
}
