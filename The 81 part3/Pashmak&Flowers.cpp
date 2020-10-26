#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,b;
    cin>>n;
    vector<ll> v;

    for(ll i=0;i<n;i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());

    //counting first similar
    ll firstsm=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==v[0])
            firstsm++;
    }

    //counting last similar
    ll lastsm=0;
    for(ll i=n-1;i>=0;i--)
    {
        if(v[i]==v[n-1])
            lastsm++;
    }
    if(firstsm==n)
        cout<<v[n-1]-v[0]<<" "<<(n*(n-1))/2<<endl;
      else
    cout<<v[n-1]-v[0]<<" "<<firstsm*lastsm<<endl;
}
