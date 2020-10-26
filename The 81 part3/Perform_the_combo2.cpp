#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>v(n);
        for(int i=0;i<m;i++)
        {
            cin>>a;
            v[a-1]++;
        }
        for(int i=n-2;i>=0;i--)
        {
            v[i]+=v[i+1];
        }
        vector<int>res(26);

        for(int i=0;i<n;i++)
        {
            res[s[i]-'a']+=v[i];
        }
        for(int i=0;i<n;i++)
        {
            res[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
            cout<<res[i]<<" ";
        cout<<"\n";
    }
}
