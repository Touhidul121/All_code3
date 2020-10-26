#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    v.resize(n,vector<int>(m,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    vector<int>ones(n+m-1,0),zeros(n+m-1,0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==0)zeros[i+j]++;
            else ones[i+j]++;
        }
    }

    int x=n+m-1;
    int ans=0;
    for(int i=0;i<x/2;i++)
    {
        ans+=min(zeros[i]+zeros[x-1-i],ones[i]+ones[x-1-i]);
    }
    cout<<ans<<"\n";
    }
}

