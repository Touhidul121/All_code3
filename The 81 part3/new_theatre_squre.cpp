#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        double r=(y/2.0);
        char a[n][m];
        ll white=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='.')
                    white++;
            }
        }
        ll ans=0;
        if(r<x)
        {
            ll adj=0;
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<m-1;j++)
              {
                if(a[i][j]=='.'&&a[i][j+1]=='.')
                {
                    adj++;
                    j++;
                }
              }
          }
          ans=adj*y+(white-adj*2)*x;
        }
        else
        {
            ans=white*x;
        }
        cout<<ans<<"\n";
    }
}
