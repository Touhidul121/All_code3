#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll pow(ll a,ll n)
{
    if(n==0)
        return 1;
   else if(n==1)
        return a;
        else
            return pow(a,n/2)*pow(a,n/2)*pow(a,n%2);

}

int main()
{
    ll a,n;
    cin>>a>>n;
    cout<<pow(a,n)<<"\n"; //here a is base and n is power
}
