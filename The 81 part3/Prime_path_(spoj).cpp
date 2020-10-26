#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100001],primes;
int vis[100001],dist[100001];

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
bool isValid(int a,int b)
{
    int cnt=0;
    while(a>0)
    {
        if((a%10)!=(b%10))
            cnt++;
        a/=10;
        b/=10;
    }
    if(cnt==1)
        return true;
    else
        return false;
}
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void isBuildGraph()
{
    int a,b;
  for(int i=1000;i<=9999;i++)
  {
      if(isPrime(i))
        primes.push_back(i);
  }

  for(int i=0;i<primes.size();i++)
  {
      for(int j=0;j<primes.size();j++)
      {
          a=primes[i];
          b=primes[j];

          if(isValid(a,b))
          {
              adj[a].push_back(b);
              adj[b].push_back(a);
          }
      }
  }
}
int main()
{
    isBuildGraph();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=1000;i<=9999;i++)
        {
            dist[i]=-1;
            vis[i]=0;
        }
        bfs(a);
        if(dist[b]==-1)
            cout<<"Impossible"<<"\n";
        else
            cout<<dist[b]<<"\n";
    }
}
