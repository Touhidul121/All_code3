#include<bits/stdc++.h>
using namespace std;

vector<int>parent(100,-1);

int find(int a)
{
    if(parent[a]<0)
        return a;
    int x=find(parent[a]);
    parent[a]=x;
    return x;
}

void union1(int a,int b)
{

    parent[b]=a;
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    parent.resize(n+1);
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        cin>>b;
        a=find(a);
        b=find(b);
        if(a!=b)
            union1(a,b);
    }
for(int i=1;i<=n;i++)
    cout<<parent[i]<<" ";
cout<<"\n";
    int k;
    cin>>k;

    for(int i=1;i<=k;i++)
    {
        cin>>a>>b;
        a=find(a);
        b=find(b);
        int mx1=0,mx2=0;
        for(int i=1;i<=n;i++)
        {
            if(parent[i]==a)
                mx1=max(mx1,i);
                if(parent[i]==b)
                    mx2=max(mx2,i);
        }
        if(mx1==mx2)
            cout<<"TIE"<<"\n";
        else if(mx1>mx2)
            cout<<a<<"\n";
        else
            cout<<b<<"\n";
    }

}
