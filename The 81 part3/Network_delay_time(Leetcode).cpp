#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1e15;
#define pii pair<ll,ll>
vector<pii>adj[100001];
vector<ll>dist(100001,INF);
void dijktra(int src)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,src});
    dist[src]=0;

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
                pq.push({dist[to],to});
            }
        }
    }
}

    int main(){
        int n,k,a;
        cin>>n>>k;
        vector<vector<int>>times;

        for(int i=0;i<1;i++)
        {
            vector<int>v;
            for(int j=0;j<3;j++)
            {
                cin>>a;
                v.push_back(a);
            }
            times.push_back(v);
        }
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        for(int i=1;i<=4;i++)
        {
            cout<<i<<" - > ";
            for(int j=0;j<adj[i].size();j++)
            {
                cout<<adj[i][j].first<<" "<<adj[i][j].second<<" ";

            }
            cout<<"\n";
        }
        dijktra(k);

        for(int i=1;i<=n;i++)
            cout<<dist[i]<<" ";

    }


