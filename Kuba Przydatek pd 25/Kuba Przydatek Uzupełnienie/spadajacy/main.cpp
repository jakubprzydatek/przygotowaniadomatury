#include <iostream>

using namespace std;

int main()
{
    int A[10][10]={{0},
          {0,-2,-1,4,7,8},
        {0,-3,2,3,-10,-2},
         {0,1,4,-1,5,-5},
         {0,-2,1,-2,-3,9},
         {0,-1,-5,1,-4,1}};
    int n=6;
    int B[10][10];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            B[i][j]=0;
        }
    }
    int k;
     int droga;
        for(int i=1;i<n;i++)
        {
            if(A[i][1]>0)
            {
                B[i][1]=1;
            }
        }

    for(int i=1;i<n;i++)
        {
            if(A[i][1]==1)
            {
                    k=i;
                    droga=1;
                    break;
            }
        }
    int czujka=0, kontrolka;
    for(int i=2;i<n;i++)
    {
        czujka=0;
        for(int j=k;j<n;j++)
        {
            if(A[j][i]>0)
            {
                if(kontrolka==0) //pierwszy najwyzszy wyraz w nastepnej kolumnie
                {
                    k=j;
                }
                czujka++;
                B[j][i]=1;
            }
        }
        if(czujka==0) break; //czujka sprawdza czy w kolumnie jest mozliwe przejscie do nastepnej
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    /*for(int i=1;i<n;i++) //po odkomentowaniu tej petli psuje sie tabela B
    {
        for(int j=1;j<n;j++)
        {
            if(B[j][i]==1)
            {
                droga++;
                break;
            }
        }
    }*/
    cout<<droga<<endl;

    return 0;
}
