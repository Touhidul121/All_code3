class Solution {
    int n;
    int dp[100001];
public:
    int solve(string s,int n)
    {
        if(s[0]=='0')return 0;
        if(n==0||n==1)return 1;

        if(dp[n]!=-1)return dp[n];
        int ans=0;
        if(s[n-1]>'0')
            ans=solve(s,n-1);
        if((n-2>=0)&&(s[n-2]=='1'|| (s[n-2]=='2' && s[n-1]<'7')))
            ans+=solve(s,n-2);

        return dp[n]=ans;

    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        n=s.size();
        int ans=solve(s,n);
        return ans;
    }
};
