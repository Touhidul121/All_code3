#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll x=ceil(n/2.0);

        ll res=((a+b)/a)*x;
        if(((a+b)%a)==0)
            {
             res-=b;
            }
            if(res<=0)
                cout<<n<<"\n";
            else
        cout<<res<<"\n";
    }
}
