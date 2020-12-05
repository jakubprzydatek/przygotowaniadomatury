#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Podaj N:" << endl;
    cin>>N;
    int T[N];
    int i;
    for(i=0;i<N;i++)
    {
        T[i]=0;
    }
    for(i=2;i<N;i++)
    {
        if(T[i]==0)
        {
            for(int j=2*i;j<N;j=j+i])
            {
                T[j]=1;
            }
        }

    }
    for(int i=0;i<N;i++)
    {
        cout<<i<<" "<<T[i]<<endl;
    }

    return 0;
}
