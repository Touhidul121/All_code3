#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a,sum=0,ans=0,x=0;
    cin>>n;
    vector<ll>v;

    for(int i=0;i<n;i++)
        cin>>a , v.push_back(a), sum+=a;
    if(sum%3!=0)
        cout<<0<<"\n";
    else
    {
        ll one_third=sum/3;
        ll two_third=2*one_third;
        ll one_third_count=0;
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=v[i];
            if(sum==two_third)
                ans+=x;
            if(sum==one_third)
                x++;
        }
        cout<<ans<<"\n";
    }

}
