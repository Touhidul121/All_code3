#include<bits/stdc++.h>
using namespace std;
#define  pb push_back
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v;
    v.resize(n,vector<ll>(m,0));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>v[i][j];

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll a=v[i][j];
            ll b=v[i][m-1-j];
            ll c=v[n-1-i][j];

            vector<ll>v1;
            v1.pb(a),v1.pb(b),v1.pb(c);
            sort(v1.begin(),v1.end());
            v[i][j]=v[i][m-1-j]=v[n-1-i][j]=v1[1];
            ans+=(v1[2]-v1[1])+(v1[1]-v1[0]);
        }
    }
    cout<<ans<<"\n";
    }
}
