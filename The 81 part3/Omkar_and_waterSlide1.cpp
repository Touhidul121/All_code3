#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int mx=0,val=INT_MAX,prev=0,cnt=0,ans=0;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(mx<a)
            {
                prev=mx;
                mx=a;
                cnt++;
                val=INT_MAX;
                f=true;
            }
            val=min(val,a);
            if(cnt>=2  &&f)
            {
                ans+=prev-val;
               f=false;

            }
        }
        if(cnt==1&&mx>val)
        {
            cout<<mx-val<<"\n";
        }
        else
        cout<<ans<<"\n";
    }
}

