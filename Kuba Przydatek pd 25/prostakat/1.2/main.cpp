#include <iostream>

using namespace std;

int main()
{
   int a[6]={15,12,10,6,5,1};
   int n=4;
   int p=5;
   int s=0;

   for(int i=0;i<n;i++)
   {
       if(a[i]%p==0)a[i]=0;
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]*a[j]>s) s=a[i]*a[j];
       }
   }
   cout<<s<<endl;
    return 0;
}
