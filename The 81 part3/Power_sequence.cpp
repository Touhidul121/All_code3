#include<bits/stdc++.h>
using namespace std;
#define mod 1000

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll mx=v[n-1];
    double x=pow(mx,(1.0/(n-1)));
    double x1=floor(x),x2=floor(x)+1;


    double ans1=0,ans2=0;

    for(ll i=0;i<n;i++)
    {
        ans1+=abs(v[i]-pow(x1,i));
        ans2+=abs(v[i]-pow(x2,i));
    }
    cout<<fixed<<setprecision(0)<<min(ans1,ans2)<<"\n";


}
