#include <iostream>

using namespace std;
int ile=0;
int wieze_hanoi(int n, string x, string y, string z)
{
    if(n==1)
    {
        cout<<x<<"==>"<<y<<endl;
        ile++;
    }
    else
    {
        wieze_hanoi(n-1, x, z, y);
        ile++;
        cout<<x<<"==>"<<y<<endl;
        wieze_hanoi(n-1, z, y, x);
    }
    return ile;
}

int main()
{
    cout << wieze_hanoi(3, "A", "B", "C") << endl;

    //ilosc ruchow: pow(2,n)-1
    return 0;
}
