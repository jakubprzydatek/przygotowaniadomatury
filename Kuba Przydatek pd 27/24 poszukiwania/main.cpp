#include <iostream>

using namespace std;
int T[5]={3,4,6,8,9};
int f(int p, int k, int e)
{
    int s;
    if(k==p)
    {
        if(T[p]>e)
        {
            return p;
        }
        else
        {
            return p+1;
        }
    } else
    {
        s=(p+k)/2;
        if(T[s]>e)
        {
            return f(p, s, e);
        }
        else
        {
            return f(s+1, k, e);
        }
    }
}

int main()
{

    cout << f(1,5,10) << endl;
    return 0;
}
