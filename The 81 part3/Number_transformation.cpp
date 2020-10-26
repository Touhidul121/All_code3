#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int vis[1200];
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
            memset(vis,0,sizeof(vis));
    int a,b,a1,b1,b2;
    cin>>a>>b;

    int depth=0,res=-1;
    cout<<"Case "<<tc<<": ";
    if(a==b )cout<<0<<'\n';
    else if(isPrime(a))cout<<-1<<"\n";
    else{
    queue<int>q;
    q.push(a);
    while(!q.empty())
    {
        int l=q.size();
        depth++;

        while(l--)
        {
            int cnt=0;
            int cur=q.front();
            vis[cur]=1;

            q.pop();
            if(isPrime(cur))continue;
            for(int i=2;i*i<=cur;i++)
            {
                if(cur%i==0)
                {


                        b1=i;
                        if( isPrime(b1) && cur+b1==b)
                        {
                            res=depth;
                            break;
                        }
                        else if(isPrime(b1) && cur+b1<b && !isPrime(cur+b1)&& !vis[cur+b1])q.push(cur+b1),vis[cur+b1]=1;


                        b2=cur/i;

                        if(isPrime(b2) && b2+cur==b)
                        {

                            res=depth;
                            break;
                        }
                        else if(isPrime(b2) && cur+b2<b && !isPrime(cur+b2)&&!vis[cur+b2])q.push(cur+b2),vis[cur+b2]=1;
                    }
                }

            if(res!=-1)break;
        }

        if(res!=-1)break;

    }

    cout<<res<<"\n";
    }
    }
}
