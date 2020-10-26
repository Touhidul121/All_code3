#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100002];
int vis[100002];

void dfs(int src)
{
    if(!vis[src])
    {
        vis[src]=1;
        for(auto x:adj[src])
        {
            if(!vis[x])
                dfs(x);
        }
    }
}
int main()
{
  int n,e,a,b;
  cin>>n>>e;
  int cnt=0;

  for(int i=1;i<=e;i++)
  {
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);

  }
  for(int i=1;i<=n;i++)
  {
      if(!vis[i])
      {
          dfs(i);
          cnt++;
      }
  }

 if(cnt==1 && e==n-1)
    cout<<"YES"<<"\n";
 else
    cout<<"NO"<<"\n";
}
