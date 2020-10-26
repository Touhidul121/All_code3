#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,a;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
        cin>>a , v.push_back(a);

    sort(v.begin(),v.end());


    double x1=floor(pow(v[n-1],(double(1)/(double(n-1)))));
    double x2=ceil (pow(v[n-1],(double(1)/(double(n-1)))));

    double ans1=0,ans2=0;
    for(int i=0;i<n;i++)
    {
        ans1+=abs(pow(x1,i)-v[i]);
        ans2+=abs(pow(x2,i)-v[i]);
    }
    cout<<fixed<<setprecision(0)<<min(ans1,ans2)<<"\n";
}
