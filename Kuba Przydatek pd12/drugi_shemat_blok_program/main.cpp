#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj n: "<<endl;
    cin>>n;

    int M=0;
    int L=0;
    int UL=0;
    int k;
    for(int i=1;i<=n;i++)
    {
        cout<<"podaj k: "<<endl;
        cin>>k;
        if(k>0)
        {
            M=M+k;
            L=L+1;
        }
        else
        {
            UL=UL+k;
        }
    }
    cout<<"M: "<<M<<endl;
    cout<<"L: "<<L<<endl;
    cout<<"UL: "<<UL<<endl;
    cout<<"M oznacza sume liczb dodatnich, L oznacza ilosc liczb dodatnich, UL oznacza sume liczb ujemnych"<<endl;

    return 0;
}
