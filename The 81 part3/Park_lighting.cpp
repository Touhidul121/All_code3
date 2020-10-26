#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,m;
       cin>>n>>m;

       cout<<(ll)ceil((n*m)/2.0)<<"\n";
   }
}
