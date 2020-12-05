#include <iostream>

using namespace std;

string korale(int n)
{
    string sznurek="";
    if(n==1)
    {
        sznurek=sznurek+'*';
        return sznurek;
    }
    if(n%2==0)
    {
        return korale(n/2)+'o';
    }
    if(n%2!=0)
    {
        return korale((n-1)/2)+'*';
    }
}


int main()
{
    int n;
    cout<<"Podaj n:"<<endl;
    cin>>n;
    cout<<korale(n);
    return 0;
}
