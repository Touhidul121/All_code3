#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
int vis[100001];

void dfs(int node)
{
    vis[node]=1;

    for(int child:adj[node])
        if(!vis[child])
        dfs(child);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,e,a,b;
      cin>>n>>e;
      for(int i=0;i<n;i++)
      {
          adj[i].clear();
          vis[i]=0;
      }
      for(int i=0;i<e;i++)
      {
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
      }
      int cnt=0;

      for(int i=0;i<n;i++ )
      {
          if(!vis[i])
          {
              dfs(i);
              cnt++;
          }
      }
      cout<<cnt<<"\n";
  }
}
