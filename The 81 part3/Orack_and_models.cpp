
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
set<int>st;

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,a,x,y;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans(n+1,1);
    for(int i=2;i<=n;i++)
    {
     for(int j=1;j*j<=i;j++)
     {
         if(i%j==0){
                x=j;
                y=i/j;
         if(v[x]<v[i])
         {
             ans[i]=max(ans[i],ans[x]+1);
         }
         if(v[y]<v[i])
            ans[i]=max(ans[i],ans[y]+1);
         }
     }
    }
    cout<<*max_element(ans.begin(),ans.end())<<"\n";
    }
}
