#include<bits/stdc++.h>
#define mx 1000010
using namespace std;

vector<int>v[mx];
bool visited[mx];
void dfs(int node)
{
    if(!visited[node])
    {
        visited[node]=1;
        for(int i=0;i<v[node].size();i++)
        {
            int next=v[node][i];
           if(visited[next]==0)
                dfs(next);
        }
    }
}
int main()
{
 int n,t,a;
 cin>>n>>t;
 for(int i=1;i<n;i++)
 {
     cin>>a;
     v[i].push_back(i+a);
 }
 dfs(1);
 if(visited[t]==1)
    cout<<"YES"<<"\n";
 else
    cout<<"NO"<<"\n";
}
