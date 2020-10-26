#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
vector<int>adj[maxN];

void dfs(int node,int des,vector<int>x)
{
    x.push_back(node);
    if(node==des)
    {
        for(int i=0;i<x.size();i++)
            cout<<x[i]<<" ";
            cout<<"\n";
        return;
    }
    for(int child:adj[node])
    {
        dfs(child,des,x);
    }
    x.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,a,b;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b); // directed graph
    }
    vector<int>x;
    dfs(1,n,x);
}
