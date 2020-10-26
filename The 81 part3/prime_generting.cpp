#include<bits/stdc++.h>
#define ll long long int
using namespace std;

set<ll> s;
int isprime(ll n)
{
    int flag=0;
for(ll i=2;i*i<=n;i++)

{
    if(n%i==0)
        {
            flag++;
            break;
        }
}
if(flag)
    return 0;
else
    return 1;

}

int main()
{
    s.insert(4);
    for(ll i=3;i<=1000000;i+=2)
    {
        if(isprime(i))
        {
            s.insert((ll)i*i);
        }
    }
    ll n,x;
    cin>>n;
    while(n--)
    {

       cin>>x;
       if(s.find(x)!=s.end())
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}

