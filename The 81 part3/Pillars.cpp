#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,b;
    cin>>n;
    vector<ll>a,v;

    for(int i=0;i<n;i++)
    {
      cin>>b;
      a.push_back(b);
v.push_back(b);
    }

     if(a[1]>a[0])
     {
         ll i=0,count=1;
         while(a[i+1]>a[i]&&i<n-1)
         {

           i++;
           count++;
           }
      ll j=n-1;
         while(a[j]<a[j-1]&&j>=i+1)
         {

             j--;
             count++;
         }

         if(count==n)
            cout<<"YES"<<"\n";
         else
            cout<<"NO"<<"\n";
     }
     else
     {
         sort(v.rbegin(),v.rend());

         if(v==a)
            cout<<"YES"<<"\n";
         else
            cout<<"NO"<<"\n";
     }
}
