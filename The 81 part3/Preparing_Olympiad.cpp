#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,x,cnt=0,mn,mx,ans=0,sum=0,a;
    cin>>n>>l>>r>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<pow(2,n);i++)
    {
        mn=INT_MAX,mx=0;
        for(int j=0;j<n;j++)
        {
          if(i&(1<<j))
          {
              sum+=v[j];
              mn=min(mn,v[j]);
              mx=max(mx,v[j]);
              cnt++;
          }
        }
        if(cnt>1)
        {
          if(sum>=l&&sum<=r && mx-mn>=x)
                ans++;
        }
        cnt=0;
        sum=0;
    }
    cout<<ans<<"\n";
}
