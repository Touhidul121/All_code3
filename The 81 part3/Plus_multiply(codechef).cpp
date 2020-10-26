#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        ll x=0,y=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a==2)x++;
            if(a==0)y++;
        }
        cout<<((x*(x-1))/2)+((y*(y-1))/2)<<"\n";
    }
}
