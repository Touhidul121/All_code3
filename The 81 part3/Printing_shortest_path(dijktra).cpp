#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1e15;
#define pii pair<ll,ll>
vector<pii>adj[100001];
vector<ll>dist(100001,INF);
vector<ll>par(100001,-1);
ll x;
void dijktra(int src)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,1});
    dist[1]=0;

    while(!pq.empty())
    {
        ll cur=pq.top().second;
        ll cur_d=pq.top().first;
        pq.pop();

        if(cur_d!=dist[cur])
            continue;

        for(auto edge:adj[cur])
        {
            ll to=edge.first;
            ll len=edge.second;

            if(dist[cur]+len<dist[to])
            {
                dist[to]=dist[cur]+len;
                par[to]=cur;
                x=to;
                pq.push({dist[to],to});
            }
        }
    }
}

int main()
{
    ll n,m,a,b,w;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
    }
    dijktra(1);

    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";

        cout<<"Path------"<<"\n";
        vector<ll>ans;
        while(x!=-1)
        {
            ans.push_back(x);
            x=par[x];
        }
        reverse(ans.begin(),ans.end());
        for(ll x:ans)
            cout<<x<<" ";
}

