#include<bits/stdc++.h>
using namespace std;
#define INF (int)1e18
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


        ll n,a,k;
        cin>>n>>k;
        vector<ll>wt,val;
        vector<pair<ll,ll>>track;
        for(int i=0;i<n;i++)
        {
            cin>>a;

                track.push_back({a,i});


        }
        sort(track.begin(),track.end());
        for(int i=0;i<n;i++)
        {
            val.push_back(track[i].first);
            wt.push_back(pow(2,track[i].second));
        }
        for(int i=0;i<n;i++)
            cout<<val[i]<<" ";cout<<"\n";
        for(int i=0;i<n;i++)
            cout<<wt[i]<<" ";cout<<"\n";

        int w=k;

        ll dp[n+1][w+1];

        for(int i=0;i<=w;i++)
            dp[0][i]=INF;

        for(int i=0;i<=n;i++)
            dp[i][0]=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-wt[i-1]]+val[i-1]);
                }
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(dp[n][w]==INF)cout<<-1<<"\n";
        else cout<<dp[n][w]<<"\n";


}

