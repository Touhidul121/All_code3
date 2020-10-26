#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll n,i;
     cin>>n;
     ll sum1=0,sum2=0;
     sum1+=pow(2,n);
     for(i=1;i<n/2;i++)
        sum1+=pow(2,i);
     for(;i<n;i++)
        sum2+=pow(2,i);
     cout<<abs(sum1-sum2)<<"\n";
    }
}
