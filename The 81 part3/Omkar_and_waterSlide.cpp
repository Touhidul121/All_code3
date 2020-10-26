#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
                ans+=v[i]-v[i+1];
        }
        cout<<ans<<"\n";


    }
}
