#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,q;
        cin>>n>>q;
        vector<ll>v,ans;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int prev=0;
        int tm=0;
        for(int i=0;i<n;)
        {
            if(tm%2==0)
            {
                while(i<n &&v[i]>prev)
                {
                    prev=v[i];
                    i++;

                }
                ans.push_back(v[i-1]);
            }
            else
            {
                while(i<n &&v[i]<prev)
                {
                    prev=v[i];
                    i++;
                }
                ans.push_back(v[i-1]);
            }
            tm++;
        }

        if(ans.size()%2==0)ans.pop_back();

        ll res=0;
        for(int i=0;i<ans.size();i++)
        {
            if(i%2==0)
                res+=ans[i];
            else
                res-=ans[i];
        }
        cout<<res<<"\n";

    }
}
