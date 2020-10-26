#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>primes;
ll ar[100001];

map<ll,vector<int>>mp;

void sieve(int n)
{
    vector<int> a(n+1,0);

    for(int i=4;i<=n;i+=2)
        a[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
       if(a[i]==0)
       {
           for(int j=i*i;j<=n;j+=i)
            a[j]=1;
       }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            primes.push_back(i);
        }
    }
}

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=(a*a);
    }
    return res;
}
int main()
{
 int n,cnt=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>ar[i];
     ll x=ar[i];
     for(ll j=2;j*j<=x;j++)
     {
         if(x%j==0)
         {
          while(x%j==0)
          {
              cnt++;
              x/=j;
          }
          mp[j].push_back(cnt);
          cnt=0;
         }
     }
         if(x>1)
         {
             mp[x].push_back(1);
         }

 }
     sieve(200000);
     ll res=1;

     for(int p:primes)
     {
         if((mp.find(p)==mp.end())||(mp[p].size()+1<n))
            continue;
         sort(mp[p].begin(),mp[p].end());

         if(mp[p].size()+1==n)
            res=res*power(p,mp[p][0]);
         else
         {
             res=res*power(p,mp[p][1]);
         }
     }
     cout<<res<<"\n";

}
