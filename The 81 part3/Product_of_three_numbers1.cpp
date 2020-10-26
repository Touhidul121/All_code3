#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n&1)
            res=res*a , n--;
        n>>=1;
        a=a*a;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,x1,y1,z1=1;
        cin>>n;
        map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    cnt++;
                    n=n/i;
                }
                mp[i]=cnt;
                cnt=0;
            }
        }
        if(n>1)
            mp[n]=1;
        for(auto x:mp)
        {
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end());
        bool f=false;
        if(mp.size()>=3){
            f=true;
            int i=1;
            for(auto x:mp)
            {
               if(i==1)
                x1=power(x.first,x.second);
               else if(i==2)
                y1=power(x.first,x.second);
                else
                    z1=z1*power(x.first,x.second);
               i++;
            }
        }
        else if(mp.size()==2)
        {
            int cnt1=0;
            for(auto x:mp)
            {
                cnt1+=x.second;
            }
            if(cnt1>=4){
                f=true;
                x1=v[0].first;
                y1=v[1].first;
                z1=z1*power(v[0].first,v[0].second-1);
                z1=z1*power(v[1].first,v[1].second-1);
            }
        }
        else
        {
            int cnt1=0;
            for(auto x:mp)
            {
                cnt1+=x.second;
            }
            if(cnt1>=6){
                f=true;
                x1=mp.begin()->first;
                y1=power(mp.begin()->first,2);
                int r=mp.begin()->second-3;
                z1=power(mp.begin()->first,r);
            }
        }
        if(f)
        {
            cout<<"YES"<<"\n";
            cout<<x1<<" "<<y1<<" "<<z1<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
            }
    }
}
