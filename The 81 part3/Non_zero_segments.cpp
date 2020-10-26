#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,a;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    map<ll,ll>mp;
    mp[0]=1;
    ll sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(mp[sum])
        {
            ans++;
            mp.clear();
            sum=v[i];
            mp[0]=1;
        }
        mp[sum]++;
    }
    cout<<ans<<"\n";
}
