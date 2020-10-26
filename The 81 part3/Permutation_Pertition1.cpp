#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,k,a,sum=0;
    cin>>n>>k;

    vector<ll>v,v1,loc;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    sort(v1.rbegin(),v1.rend());

    set<ll>st;
    for(int i=0;i<k;i++)
    {
        sum+=v1[i];st.insert(v1[i]);
    }

    ll ans=1;

    for(ll i=0;i<v.size();i++)
    {
        if(st.find(v[i])!=st.end())
        {
            loc.push_back(i+1);
        }
    }

    for(ll i=0;i<loc.size()-1;i++)
    {
        ll x=loc[i+1]-loc[i];
        ans=(ans*x)%mod;
    }
    cout<<sum<<" "<<ans<<"\n";
}
