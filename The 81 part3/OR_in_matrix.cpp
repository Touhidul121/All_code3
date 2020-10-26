#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i;
    cin>>m>>n;

    int a[m+1][n+1],b[m+1][n+1],c[m+1][n+1];

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j],b[i][j]=1,c[i][j]=0;


          bool f=false;
          for( i=1;i<=m;i++)
          {
              for(int j=1;j<=n;j++)
              {
               if(a[i][j]==0)
               {
                   for(int k=1;k<=n;k++)
                    b[i][k]=0;
                   for(int k=1;k<=m;k++)
                    b[k][j]=0;
               }
              }

          }

          for( i=1;i<=m;i++)
          {
              for(int j=1;j<=n;j++)
              {
               if(b[i][j]==1)
               {

                   for(int k=1;k<=n;k++)
                    c[i][k]=1;
                   for(int k=1;k<=m;k++)
                    c[k][j]=1;

               }

              }

          }
          for(int i=1;i<=m;i++)
          {
              for(int j=1;j<=n;j++)
              {
                  if(c[i][j]!=a[i][j])
                  {
                      f=true;
                      break;
                  }
              }

          }
          if(f)
          {
              cout<<"NO"<<"\n";
          }
          else{
                cout<<"YES"<<"\n";
           for(int i=1;i<=m;i++)
          {
              for(int j=1;j<=n;j++)
              {
                  cout<<b[i][j]<<" ";
              }
              cout<<"\n";
          }
          }
}
