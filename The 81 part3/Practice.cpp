#include<bits/stdc++.h>
#define fi(n, m) for(int i=n; i<=m; i++)
#define fii(i, n, m) for(int i=n; i<=m; i++)
using namespace std;
vector<int>vt[30001], cost[30001];
int n, dis[30001], dis1[30001], a1, a2, p, cnt=0;

void bfs(int st){
    fi(0, n) dis[i]=-1;
    int mx=-1;
    queue<int>q;
    q.push(st);
    dis[st]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(mx<dis[u]){
            mx=dis[u];
            p=u;
        }
        for(int j=0; j<vt[u].size(); j++){
            int v=vt[u][j];
                if(dis[v]==-1){
                    dis[v]=dis[u]+cost[u][j];
                    q.push(v);
                }

        }
    }
}

void bfs1(int st){
    fi(0, n) dis1[i]=-1;
    queue<int>q;
    q.push(st);
    dis1[st]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int j=0; j<vt[u].size(); j++){
            int v=vt[u][j];
                if(dis1[v]==-1){
                    dis1[v]=dis1[u]+cost[u][j];
                    q.push(v);
                }
        }
    }
}

int main()
{
    int t, cs=1, u, v, w;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        fi(1, n-1){
            scanf("%d%d%d", &u, &v, &w);
            vt[u].push_back(v);
            vt[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        bfs(0);
        a1=p;

        bfs(a1);
        a2=p;
        bfs1(a2);
        printf("Case %d:\n", cs++);
        fi(0, n-1){
            printf("%d\n", max(dis[i], dis1[i]));
            vt[i].clear(); cost[i].clear();
        }
    }
    return 0;
}


