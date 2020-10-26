#include<bits/stdc++.h>
using namespace std;

bool vis[100][100];
int dist[100][100];
char grid[100][100];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m,startX,startY,endX,endY;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1|| grid[i][j]=='#' ||grid[i][j]=='m')
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    dist[srcX][srcY]=0;
    vis[srcX][srcY]=1;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if(isValid(newX,newY))
            {
                dist[newX][newY]=dist[curX][curY]+1;
                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
    cin>>n>>m;
    int x1,y1,x2,y2,x3,y3;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='a')
            {
             x1=i;
             y1=j;
            }
            if(grid[i][j]=='b')
            {
                x2=i;
                y2=j;
            }
            if(grid[i][j]=='c')
            {
              x3=i;
              y3=j;
            }
            if(grid[i][j]=='h')
            {
                endX=i;
                endY=j;
            }
        }
    }
    cout<<"Case "<<tc<<": ";
    int mn=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vis[i][j]=0;
        }
    }
    bfs(x1,y1);
    mn=max(dist[endX][endY],mn);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vis[i][j]=0;
        }
    }
    bfs(x2,y2);
    mn=max(dist[endX][endY],mn);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vis[i][j]=0;
        }
    }
    bfs(x3,y3);
    mn=max(dist[endX][endY],mn);
    cout<<mn<<"\n";
    }
}



