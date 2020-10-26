#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10002];
int vis[10002];
int dist[10002];
void bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    q.push(src);
    dist[src]=0;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int x:adj[cur])
        {
            if(!vis[x])
            {
                vis[x]=1;
                q.push(x);
                dist[x]=dist[cur]+1;
            }
        }
    }
}



int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m,a,b;
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int s,d;
        cin>>s>>d;
        int dist1[n],dist2[n],mx=0;
        bfs(s);
        for(int i=0;i<n;i++)
        {
            dist1[i]=dist[i];
        }
        memset(vis,0,sizeof(vis));
        memset(dist,0,sizeof(dist));
        bfs(d);
        for(int i=0;i<n;i++)
        {
            dist2[i]=dist[i];
        }

        for(int i=0;i<n;i++)
            mx=max(mx,dist1[i]+dist2[i]);
            cout<<"Case "<<tc<<": ";
        cout<<mx<<"\n";

    }
}
