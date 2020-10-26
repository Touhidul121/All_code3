#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
set<ll>st;

void get_div(ll n)
{
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==n/i)st.insert(i);
            else
            {
                st.insert(i);
                st.insert(n/i);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {

        ll n,res=0;
        cin>>n;
        ll arr[n+1];
        for(int i=1;i<=n;i++)cin>>arr[i];

        for(ll i=1;i<=n;i++)
        {
           get_div(i);
           vector<ll>v;
           for(auto x:st)
                v.push_back(arr[x]);

           vector<ll>v1(v.size(),1);
           for(int j=1;j<v.size();j++)
           {
               for(int k=0;k<j;k++)
               {
                   if(v[k]<v[j])
                   {
                     v1[j]=max(v1[j],v1[k]+1);
                   }
               }
           }
           ll mx=*max_element(v1.begin(),v1.end());

           res=max(res,mx);
           st.clear();
        }
        cout<<res<<"\n";
    }
}
