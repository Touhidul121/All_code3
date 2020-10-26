#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a;
        cin>>n;
        vector<int>v(n+1);
        int ans=0;

        for(int j=0;j<n;j++)
            {
        bool f=true;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>a;

            if(v[a]==0 &&f)
            {
                v[a]=1;
                f=false;

            }
        }
        if(f)
            ans=j+1;
            }
        if(ans==0)
            cout<<"OPTIMAL"<<"\n";
        else
        {
            cout<<"IMPROVE"<<"\n";
            cout<<ans<<" ";
            for(int i=1;i<=n;i++)
            {
                if(v[i]==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }

        v.clear();
    }
}
