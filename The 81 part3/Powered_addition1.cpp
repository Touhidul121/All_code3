#include<bits/stdc++.h>
using namespace std;
int n,ar[10000];

bool isValid(int mid)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[i+1])
            sum+=ar[i]-ar[i+1];
    }
    mid--;
    if(pow(2,mid)>=sum)return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ar[i];

    int L=0,H=35,ans=H;
    while(L<=H)
    {
        int mid=(L+H)/2;
        if(isValid(mid))
            ans=min(ans,mid),H=mid-1;
        else
            L=mid+1;
    }
    cout<<ans<<"\n";
    }
}
