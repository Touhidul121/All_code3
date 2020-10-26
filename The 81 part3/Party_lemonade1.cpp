#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,L;
    cin>>n>>L;
    ll c[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    for(int i=1;i<n;i++)
        c[i]=min(c[i],2*c[i-1]);

    ll ans=LLONG_MAX;
    ll sum=0ll;

    for(ll i=n-1;i>=0;i--)
    {
        ll need=(L)/(1<<i);
        sum+=(ll)need*c[i];

        L-=need<<i;
        ans=min(ans,sum+(L>0)*c[i]); //the value of L will be either 0 or 1
    }
    cout<<ans<<"\n";
}
