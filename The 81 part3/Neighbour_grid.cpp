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
        int n,m;
        cin>>n>>m;
        bool f=false;
        ll a[n+2][m+2];
        for(int i=0; i<n+2; i++)
        {
            for(int j=0; j<m+2; j++)
            {
                a[i][j]=-1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                cin>>a[i][j];
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i][j]==0)
                    continue;
                else
                {
                    int  x=a[i][j+1];
                    int  y=a[i-1][j];
                    int z=a[i][j-1];
                    int  p=a[i+1][j];
                    int neigh=0,r=a[i][j];
                    if(x!=-1)
                        neigh++;
                    if(y!=-1)
                        neigh++;
                    if(z!=-1)
                        neigh++;
                    if(p!=-1)
                        neigh++;
                    if(neigh<a[i][j] || r>neigh)
                    {
                        f=true;
                        break;
                    }
                    else
                    {
                        if(x>0)
                            r--;
                        if(y>0)
                            r--;
                        if(z>0)
                            r--;
                        if(p>0)
                            r--;
                        if(r>0 && y!=-1)
                        {
                            a[i-1][j]++;
                            r--;
                        }
                        if(r>0 && z!=-1)
                        {
                            a[i][j-1]++;
                            r--;
                        }
                        if(r>0&& x!=-1)
                        {
                            a[i][j+1]++;
                            r--;
                        }
                        if(r>0 && p!=-1)
                        {
                            a[i+1][j]++;
                            r--;
                        }
                    }

                }
            }
            if(f)
                break;
        }
        if(f)
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
    }
}
