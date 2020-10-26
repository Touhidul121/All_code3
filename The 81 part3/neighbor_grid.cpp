#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      int a[n][m];
      bool f=false;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              cin>>a[i][j];
              if(a[i][j]>4)
                f=true;
          }
      }
      if(a[0][0]>2 || a[0][m-1]>2 || a[n-1][0]>2 || a[n-1][m-1]>2)
        f=true;
      for(int j=1;j<=m-2;j++)
      {
          if(a[0][j]>3 || a[n-1][j]>3)
          {
              f=true;
              break;
          }
      }
      for(int i=1;i<=n-2;i++)
      {
          if(a[i][0]>3 || a[i][m-1]>3)
          {
              f=true;
              break;
          }
      }
      if(f)
        cout<<"NO"<<"\n";
      else
      {
          cout<<"YES"<<"\n";
          for(int j=0;j<m;j++)
          {
              a[0][j]=3;
              a[n-1][j]=3;
          }
          for(int i=0;i<n;i++)
          {
              a[i][0]=3;
              a[i][m-1]=3;
          }
          a[0][0]=2;a[0][m-1]=2;a[n-1][0]=2;a[n-1][m-1]=2;

          for(int i=1;i<=n-2;i++)
            for(int j=1;j<=m-2;j++)
            a[i][j]=4;

          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
          {
            cout<<a[i][j]<<" ";
          }
          cout<<"\n";
          }
      }
    }
}
