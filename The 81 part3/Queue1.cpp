#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a,cnt=1,sum=0;
    cin>>n;
    vector<ll>v;
    vector<ll>pref(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    sum=v[0];

    for(int i=1;i<n;i++)
    {
        if(sum<=v[i]){
               sum+=v[i];
            cnt++;
        }
    }
    cout<<cnt<<'\n';
}
