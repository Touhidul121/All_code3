#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll sum=0;
        if(n*a<=s)
        {
          if(n*a+b>=s)
                cout<<"YES"<<"\n";
          else
            cout<<"NO"<<"\n";
        }
        else
        {
            ll x=floor(s/(n*1.0));
            sum=x*n;
            if(sum+b>=s)
            cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
}
