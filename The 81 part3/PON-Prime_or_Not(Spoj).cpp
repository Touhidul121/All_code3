#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mulmod(ll a, ll b,ll c)
{
    ll x=0,y=a%c;

    while(b>0)
    {
        if(b%2==1)
        {
            x=(x+y)%c;
        }
        y=(y*2LL)%c;
        b/=2;
    }
    return x%c;
}
ll binPower(ll a,ll n,ll mod)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=mulmod(res,a,mod);
        n>>=1;
        a=mulmod(a,a,mod);
    }
    return res%mod;
}
bool isPrime(ll m,int iterations)
{
    if(m<=4)
        return m==2 || m==3;

    for(int i=1;i<=iterations;i++)
    {
        ll a=2+rand()%(m-3);
        ll res=binPower(a,m-1,m);

        if(res!=1)return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isPrime(n,5))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}

