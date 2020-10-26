#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,a,x,y;
        cin>>n>>s;
        vector<int>v;
        int ind,ind1,ind2;
        bool f=false,f1=false;
        for(int i=0;i<n;i++){
            cin>>a, v.push_back(a);
            if(s%a!=0)
            {
                x=a;
                ind=i;
                f=true;
            }
        }
        if(f)
        {
            cout<<"YES"<<" ";
            for(int i=0;i<n;i++)
            {
                if(i==ind)
                    cout<<(s/x)+1<<" ";
                    else
                cout<<0<<" ";
            }
            cout<<"\n";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(max(v[i],v[j])%min(v[i],v[j])!=0)
                    {
                        x=min(v[i],v[j]);
                        y=max(v[i],v[j]);
                        if(min(v[i],v[j])==v[i])
                        {
                            ind1=i,ind2=j;
                        }
                        else
                            ind1=j,ind2=i;
                        f1=true;
                        break;
                    }
                }
            }
            if(f1)
            {
                cout<<"YES"<<" ";
                for(int i=0;i<n;i++)
                {
                    if(i==ind1)
                        cout<<((s-y)/x)+1<<" ";
                   else if(i==ind2)
                        cout<<1<<" ";
                    else
                        cout<<0<<" ";
                }
                cout<<"\n";
            }
            else
                cout<<"NO"<<"\n";
        }
    }
    }

