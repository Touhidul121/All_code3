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
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int cnt=0;
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
                {

                    v.push_back(i);
                    if(s[0]=='0')s[0]='1';
                    else s[0]='0';
                }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(t[i]!=s[0])
                {
                    v.push_back(i+1);
                    if(s[0]=='0')s[0]='1';
                    else s[0]='0';
                }
        }
        cout<<v.size()<<" ";
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
