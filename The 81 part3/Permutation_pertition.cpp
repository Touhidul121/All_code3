#include<bits/stdc++.h>
#define mod  998244353
using namespace std;

int main()
{
    int n,a,k;
    cin>>n>>k;
    vector<int>v,v1;
    unordered_map<int,int>mp;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        mp[a]=i+1;
    }
        long long ans=1;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
            v1.push_back(mp[v[i]]);

        }

      sort(v1.begin(),v1.end());
        for(int i=1;i<v1.size();i++){
            ans*=(v1[i]-v1[i-1]);
            ans=ans%mod;
        }

        cout<<sum<<" "<<ans%mod<<'\n';


}
