#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a);
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
                sum+=v[i]-v[i+1];
        }
        if(sum==0)
            cout<<0<<"\n";
        else
        {

        ll x=(log2(sum*1.0));

        cout<<(ll)x+1<<"\n";
        }
    }
}
