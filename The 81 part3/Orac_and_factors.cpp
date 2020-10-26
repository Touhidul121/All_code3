#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

ll f(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     ll n,k,i;
     cin>>n>>k;
     for( i=0;i<k;i++)
     {
         n+=f(n);
         if(n%2==0)
            break;
     }
     n+=(k-(i+1))*2;
     cout<<n<<"\n";
 }
}
