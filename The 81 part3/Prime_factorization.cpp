#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,x;
    cin>>n;
    x=n;
    map<int,int>mp;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            mp[i]=cnt;
            cnt=0;
        }
    }
    if(n>1)
    {
            mp[n]++;
    }
    cout<<"Factors"<<" "<<"Number_of_times"<<"\n";
    for(auto x:mp)
        cout<<x.first<<"     -> "<<x.second<<"\n";

    cout<<"Number of factors"<<"\n";
    vector<int>v;
    for(auto x:mp){
        v.push_back(x.second);
    }
    int ans=1;
    for(auto x:v)
        ans*=(x+1);
    cout<<ans<<"\n";

    cout<<"sum of factors of a number"<<"\n";
    int sum=1;

    for(auto x:mp)
    {
        sum*=(pow(x.first,x.second+1)-1)/(x.first-1);
    }
    cout<<sum<<"\n";

    cout<<"Product of factors of a number"<<"\n";
    cout<<pow(x,ans/2);
}
