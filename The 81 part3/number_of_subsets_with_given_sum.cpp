#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int m;
    cin>>m;

    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int i=1;i<=m;i++)dp[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
           else
            dp[i][j]=dp[i-1][j];
        }
    }

    cout<<dp[n][m]<<"\n";

}
