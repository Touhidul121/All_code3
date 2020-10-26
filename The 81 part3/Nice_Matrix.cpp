#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    ll n,m,a;
    cin>>n>>m;

    vector<ll>v1;

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)cin>>a , v1.push_back(a);

    sort(v1.begin(),v1.end());
    ll ans=0;
    ll k=v1[v1.size()/2];

    for(int i=0;i<v1.size();i++)ans+=abs(k-v1[i]);
    cout<<ans<<"\n";
    }


}
