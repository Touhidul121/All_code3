class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();

        long long dp[n+1][m+1];
        memset(dp,0,sizeof(dp));

        for(int i=1;i<=m;i++)
        {
            if(t[0]==s[i-1])dp[1][i]=dp[1][i-1]+1;
            else
                dp[1][i]=dp[1][i-1];
        }

        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
               if(t[i-1]==s[j-1])
                   dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        return dp[n][m];
    }
};
