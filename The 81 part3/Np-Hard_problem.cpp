#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5+1;
vector<int>adj[maxN];
int vis[maxN],col[maxN];



bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;

    for(int child:adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,1^c)==false)
                return false;
        }
        else
        {
            if(col[node]==col[child])
                return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m,a,b;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    bool ans=true;
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==0)continue;
        if(vis[i]==0)
        {
            if(dfs(i,0)==false)
            {
                ans=false;break;
            }
        }
    }
    if(!ans)
        cout<<-1<<"\n";
    else
    {
        vector<int>v1,v2;

        for(int i=1;i<=n;i++){
            if(adj[i].size()==0)continue;

            if(col[i]==0)v1.push_back(i);
            else v2.push_back(i);


        }
        cout<<v1.size()<<"\n";
        for(int x:v1)
            cout<<x<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(int x:v2)
            cout<<x<<" ";
        cout<<"\n";


    }

}
