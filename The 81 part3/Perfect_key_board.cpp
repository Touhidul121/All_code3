#include<bits/stdc++.h>
using namespace std;
vector<int>adj[27];
int vis[27],vis1[27];

bool cycle(int node,int par)
{
    vis[node]=1;
    for(int child:adj[node])
    {
        if(vis[child]==1)
        {
            if(child!=par)
                return true;
        }
        else
            cycle(child,node);
    }
}
unordered_set<char>st;
void dfs(int node)
{
    vis1[node]=1;

    st.insert(node-1+'a');
    for(int child:adj[node])
        if(!vis1[child])
        dfs(child);
}
int main()
{
    int n,a,b,src;
    string s;
    unordered_set<char>st1;
    cin>>s;
    n=s.size();
    for(int i=0;i<s.size();i++)
        st1.insert(s[i]);
    vector<char>v;
    for(char x:st1)
        v.push_back(x);
    for(int i=0;i<v.size()-1;i++)
    {
      a=v[i]-'a'+1;
      b=va[i+1]-'a'+1;

      if(i==0)
        src=a;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    if(cycle(src,-1))
        cout<<"NO"<<"\n";
    else{
    dfs(src);
    for(char x:st)
        cout<<x<<" ";
    }

}
