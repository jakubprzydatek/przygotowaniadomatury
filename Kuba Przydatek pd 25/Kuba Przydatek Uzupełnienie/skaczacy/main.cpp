#include <iostream>

using namespace std;

int main()
{
    int A[10][10]={{0},
          {0,-2,-1,4,7,8},
        {0,-3,2,3,-10,-2},
         {0,1,-4,-1,5,-5},
         {0,-2,-1,-2,-3,9},
         {0,-1,-5,1,-4,1}};
    int n=6;
    int B[10][10];

    for(int j=1;j<n;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(A[i][j]>0)
            {
                B[i][j]=1;
            }
            else
            {
                B[i][j]=0;
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    int droga=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(B[j][i]==1)
            {
                droga++;
                break;
            }
        }
    }
    cout<<droga<<endl;

    return 0;
}
