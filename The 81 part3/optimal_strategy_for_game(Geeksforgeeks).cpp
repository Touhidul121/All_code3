/*Consider a row of n coins of
values v1 . . . vn, where n is even.
We play a game against an opponent by
alternating turns. In each turn, a player
selects either the first or last coin from
the row, removes it from the row permanently,
and receives the value of the coin.
Determine the maximum possible amount of
money we can definitely win if we move first.*/

#include<bits/stdc++.h>

using namespace std;
const int maxN= 10000;
vector<int>v(maxN);
int dp[maxN][maxN];
int game(int i,int j)
{
    if(i==j)return v[i];
    if(j==i+1)return max(v[i],v[j]);
    if(dp[i][j]!=-1)return dp[i][j];

    return dp[i][j]=max(v[i]+min(game(i+2,j),game(i+1,j-1)),
               v[j]+min(game(i+1,j-1),game(i,j-2)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;

      for(int i=0;i<n;i++)
        cin>>v[i];
      memset(dp,-1,sizeof(dp));
      cout<<game(0,n-1)<<'\n';
    }
}
