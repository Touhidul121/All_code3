#include<bits/stdc++.h>
using namespace std;

int pre[100001];

int main()
{
    int ar[100001],n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>ar[i];

    pre[0]=1;

    for(int i=1;i<=n;i++)
    {
        int cur=ar[i];

        for(int j=m;j>=cur;j--)
        {
            if(pre[j] || pre[j-cur]==0)
                continue;
            else
                pre[j]=cur;
        }
    }
    if(pre[m]==0)
        cout<<-1<<"\n";
    else
    {
        int cur=m;
        while(cur>0)
        {
            cout<<pre[cur]<<" ";
            cur-=pre[cur];
        }
    }
}

