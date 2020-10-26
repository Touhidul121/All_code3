#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
set<int>st;
getdiv(ll n)
{
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            st.insert(i);
            st.insert(n/i);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,a;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    vector<ll>v1,v3;
    for(ll i=1;i<=n;i++)
    {
        getdiv(i);
        for(auto x:st){

            v1.push_back(v[x-1]);
        }
        ll l=v1.size();
        vector<ll>v2(l,1);
        for(ll k=1;k<l;k++)
        {
            for(ll j=0;j<k;j++)
            {

                if(v1[j]<v1[k])
                {
                 v2[k]=max(v2[k],v2[j]+1);
                }
            }
        }
      v3.push_back(*max_element(v2.begin(),v2.end()));
       st.clear();
       v1.clear();
    }
    cout<<*max_element(v3.begin(),v3.end())<<"\n";
    }
}
