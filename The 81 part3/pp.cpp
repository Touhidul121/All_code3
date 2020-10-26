
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define SZ(x) ((int)(x).size())
#define scl(x) scanf("%lld", &x)
#define scll(x,y) scanf("%lld %lld", &x, &y)
#define all(x) (x).begin(),(x).end()
#define mem(a,d) memset(a,d,sizeof a)
#define REP(i,n) for(int i=0;i<n;i++)
#define REV(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define pri(a) cout<<a<<endl
#define prii(a,b) cout<<a<<" "<<b<<endl
using namespace std;
#define inf 12345678912
#define sz 13

ll n;
string sa[sz];
int d[sz][sz];
bool vis[sz][sz];
char destination;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

struct point
{
    int x,y;
};

point src;

void initt()
{
    REP(i,sz) REP(j,sz) vis[i][j] = 0, d[i][j] = INT_MAX;
}

int BFS(point s)
{
    initt();

    queue<point> Q;
    Q.push(s);

    vis[s.x][s.y] = 1;
    d[s.x][s.y] = 0;

    point u,v;

    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();

        if(sa[u.x][u.y]==destination)
        {
            src.x = u.x;
            src.y = u.y;

            return d[u.x][u.y];
        }

        REP(i,4)
        {
            v.x = u.x + dx[i];
            v.y = u.y + dy[i];

            if(v.x>=0 and v.x<n and v.y>=0 and v.y<n  and vis[v.x][v.y]==0)
            {
                 //give boundary chk first
                //then chk for xtra contraints

                if((sa[v.x][v.y]>destination and destination<='Z') or sa[v.x][v.y]=='#')
                {
                     continue;
                }
                vis[v.x][v.y] = 1;
                d[v.x][v.y] = d[u.x][u.y] + 1;
                Q.push(v);
            }
        }
    }
    return -1;
}

int main()
{
    ll t,cs=0;
    scl(t);
    while(t--)
    {
        scl(n);
        REP(i,n) cin>>sa[i];

        int cnt = 0;

        REP(i,n)
        {
            REP(j,n)
            {
                if(sa[i][j]=='A') src.x=i, src.y=j;
                if(isupper(sa[i][j])) cnt++;
            }
        }

        int cst=0, res = 0;
        destination = 'B';

        printf("Case %lld: ",++cs);

        //below used cnt-1
        //for value cnt==1,for only A is present
        //it doesnt enter loop,so print automatic 0 for this

        REP(i,cnt-1)
        {
            cst = BFS(src);

            if(cst==-1)
            {
                puts("Impossible");
                break;
            }
            else res += cst;

            destination++;
        }
        if(cst!=-1) printf("%d\n", res);
    }
    return 0;
}
