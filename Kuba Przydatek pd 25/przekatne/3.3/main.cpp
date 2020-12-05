#include <iostream>

using namespace std;

int main()
{
    int n=3;
    int s=0;
    for(int i=n;i>0;i--)
    {
        s=s+i*(n-i+1);
    }
    cout<<s<<endl;
    return 0;
}
