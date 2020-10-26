#include<bits/stdc++.h>
using namespace std;
int ar[200001],n,k;
bool isPossibleEven(int val)
{
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        if(sum%2==0)sum++;
        else
            if(ar[i]<=val)sum++;
    }
    return sum>=k;
}
bool isPossibleodd(int val)
{
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        if(sum%2==0)
        {
            if(ar[i]<=val)sum++;
        }
        else
            sum++;
    }
    return sum>=k;
}
int bs(int L,int H)
{
    int ans=H;

    while(L<=H)
    {
        int mid=(L+H)/2;
        if(isPossibleodd(mid) || isPossibleEven(mid))
        {
            ans=mid;
            H=mid-1;
        }
        else
            L=mid+1;
    }
    return ans;
}
int main()
{

    cin>>n>>k;

    for(int i=1;i<=n;i++)
        cin>>ar[i];

    cout<<bs(1,1e9);
}
