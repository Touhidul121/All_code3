#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       ll n,a,k;
       cin>>n>>k;
       vector<ll>v,v1,v2;
       for(int i=0;i<n;i++)
        cin>>a, v.push_back(a);
       ll mx1=*max_element(v.begin(),v.end());

       for(int i=0;i<n;i++)
        v1.push_back(mx1-v[i]);

       ll mx2=*max_element(v1.begin(),v1.end());

       for(int i=0;i<n;i++)
       {
           v2.push_back(mx2-v1[i]);
       }
       if(k%2==1){
       for(int i=0;i<n;i++)
        cout<<v1[i]<<" ";
       cout<<"\n";
       }
       else{
       for(int i=0;i<n;i++)
        cout<<v2[i]<<" ";
        cout<<"\n";
       }

   }
}
