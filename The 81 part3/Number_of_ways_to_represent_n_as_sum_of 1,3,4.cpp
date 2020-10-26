#include<bits/stdc++.h>
using namespace std;

int count_ways(int n)
{
    int dp[n+1];
    dp[0]=dp[1]=dp[2]=1;
    dp[3]=2;
    for(int i=4;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-3]+dp[i-4];
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<count_ways(n)<<"\n";

}
