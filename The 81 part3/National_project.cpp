#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     ll n,g,b;
     cin>>n>>g>>b;

     ll need,total;
     need=(ll)ceil(n/2.0);
     total=(((need)/g)*(g+b));
     if(need%g==0)
        total-=b;
     else
        total+=(need%g);
     cout<<max(total,n)<<"\n";
 }
}
