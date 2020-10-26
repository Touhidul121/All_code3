#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll get_div(ll n)
{
    if(n==1)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i=1;
        cin>>n>>k;

        for(i=1;i<=k;i++)
        {
         n=n+get_div(n);
         if(n%2==0)
                break;
        }
        n+=2*(k-i);
        cout<<n<<"\n";
    }
}
