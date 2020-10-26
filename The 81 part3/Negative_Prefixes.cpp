#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,l;
        for(int i=0;i<n;i++)cin>>a , v.push_back(a);
        for(int i=0;i<n;i++)cin>>a ,l.push_back(a);

        for(int i=0;i<n-1;i++)
        {
            int ind=i,mx=INT_MIN;
            if(l[i]==1)continue;
            else{
            for(int j=i+1;j<n;j++)
            {
                if(mx<v[j] && l[j]==0)
                {
                  mx=v[j];
                  ind=j;
                }
            }
            if(v[ind]>v[i])
                swap(v[ind],v[i]);
            }
        }
        for(int x:v)
            cout<<x<<" ";
            cout<<"\n";

    }
}
