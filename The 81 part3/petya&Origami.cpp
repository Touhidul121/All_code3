#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;

    ll red,green,blue;

    red=2*n;
    green=5*n;
    blue=8*n;
//cout<<blue<<" "<<green<<" "<<red<<endl;
    ll x=0,y=0,z=0;
    x=(int)ceil(red/(k*1.0));
    y=(int)ceil(green/(k*1.0));
    z=(int)ceil(blue/(k*1.0));
    //cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<x+y+z<<endl;
}
