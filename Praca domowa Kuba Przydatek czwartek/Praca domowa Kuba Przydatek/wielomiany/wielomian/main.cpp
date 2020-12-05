#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cout << "Podaj stopien wielomianu:" << endl;
    cin>>n;
    cout<<"Podaj x:"<<endl;
    cin>>x;
    int wsp[n+1];
    for(int i=0;i<=n;i++)
    {
        cout<<"Podaj wspolczynnik nr "<<i+1<<endl;
        cin>>wsp[i];
    }
      for(int i=0;i<=n;i++)
    {
        cout<<wsp[i]<<endl;
    }
    int w=wsp[0];
    for(int j=1;j<=n;j++)
    {
        w=w*x+wsp[j];
    }
    cout<<"Wielomian jest rowny: "<<w<<endl;
    return 0;
}
