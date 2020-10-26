#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n;
   cin>>n;

   vector<ll>v(n);

   for(ll i=0;i<n;i++)
   {
     cin>>v[i];
   }

   sort(v.begin(),v.end());
swap(v[n-1],v[n-2]);
   if(v[n-1]>=v[0]+v[n-2])
    cout<<"NO"<<"\n";
    else{
for(int i=1;i<n-1;i++)
{
    if(v[i]>=v[i-1]+v[i+1])
    {
        cout<<"NO"<<"\n";
        return 0;
    }
}


       cout<<"YES"<<"\n";
       for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
       cout<<"\n";

}
}
