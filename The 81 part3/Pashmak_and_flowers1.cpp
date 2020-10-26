#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 map<ll,ll>mp;
 ll n,a;
 cin>>n;
 for(int i=0;i<n;i++)
        cin>>a , mp[a]++;

 if(mp.size()==1)
 {
     ll m=mp.begin()->second;
     cout<<0<<" "<<(m*(m-1))/2<<"\n";
 }
 else
 {
   ll a,b;
   a=mp.begin()->second;
   b=mp.rbegin()->second;
   cout<<mp.rbegin()->first-mp.begin()->first<<" "<<a*b<<"\n";
 }
}
