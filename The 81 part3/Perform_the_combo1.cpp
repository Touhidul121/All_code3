#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,a;
        cin>>n>>p;
        string s;
        cin>>s;
        vector<int>pos(n);
        for(int i=0;i<p;i++)
        {
            cin>>a;
            pos[a-1]++;
        }
        for(int i=n-2;i>=0;i--)
        {
           pos[i]=pos[i]+pos[i+1];
        }
        vector<int>res(26);
        for(int i=0;i<n;i++)
        {
           res[s[i]-'a']+=pos[i];
        }
        for(int i=0;i<n;i++)
        {
            res[s[i]-'a']++;
        }
        for(auto x:res)
            cout<<x<<" ";
            cout<<"\n";
    }
}
