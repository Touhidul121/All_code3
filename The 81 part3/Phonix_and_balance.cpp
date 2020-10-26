#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
  ll n;
  cin>>n;

  ll sum1=0;
  ll sum2=0;
  sum1+=(1<<n);
  int i=1;

  for( i=1;i<n/2;i++)
  {
      sum1+=(1<<i);
  }
   for(int j=0;j<n/2;j++)
   {
       sum2+=(1<<i);
       i++;
   }
   //cout<<sum1<<" "<<sum2<<"\n";
   cout<<abs(sum1-sum2)<<"\n";
    }
}
