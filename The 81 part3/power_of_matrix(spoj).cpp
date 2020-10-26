#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
#define N 51
#define mod 1000000007
ll ar[N][N],I[N][N];


void mul(ll A[][N],ll B[][N],int dim)
{
    ll res[dim+1][dim+1];
    for(int i=1;i<=dim;i++){
        for(int j=1;j<=dim;j++)
         {
       res[i][j]=0;
      for(int k=1;k<=dim;k++)
      {
          int x=((A[i][k]%mod)*(B[k][j]%mod))%mod;
          res[i][j]=((res[i][j]%mod)+(x%mod))%mod;
      }
    }
    }
    for(int i=1;i<=dim;i++)
        for(int j=1;j<=dim;j++)
        A[i][j]=res[i][j];
}
void power(ll A[][N],int dim,int n)
{
 for(int i=1;i<=dim;i++)
 {
     for(int j=1;j<=dim;j++)
     {
         if(i==j)
            I[i][j]=1;
         else
            I[i][j]=0;
     }
 }
 while(n)
 {
     if(n&1)
     {
         mul(I,A,dim);n--;
     }
     mul(A,A,dim);n=n/2;
 }
 for(int i=1;i<=dim;i++)
    for(int j=1;j<=dim;j++)
    A[i][j]=I[i][j];
}
int main()
{
    int t,dim,n;
    cin>>t;
    while(t--)
    {
        cin>>dim>>n;
        for(int i=1;i<=dim;i++)
            for(int j=1;j<=dim;j++)
            cin>>ar[i][j];

        power(ar,dim,n);

        for(int i=1;i<=dim;i++)
        {
            for(int j=1;j<=dim;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
