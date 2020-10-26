#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a,k;
    cin>>n>>k;
    vector<int>v,ans;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)
        v.push_back(i+1);
    }
    if(v.size()<k)
        cout<<"NO"<<"\n";
    else
    {
        for(int i=0;i<k-1;i++)
            ans.push_back(v[i]);
        int rem=0;
        rem=v.size()-(k-1);
        if(rem&1)
        {
            ans.push_back(n);
            cout<<"YES"<<"\n";
            for(auto x:ans)
                cout<<x<<" ";
            cout<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
    }
}
