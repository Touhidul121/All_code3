#include<bits/stdc++.h>
using namespace std;

void operation(string &s,int n)
{
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='1')s[i]='0';
        else s[i]='1';
    }
    reverse(s.begin(),s.begin()+n+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            if(s1[i]==s2[i])continue;
            else
            {
                if(s2[i]==s1[0])
                    v.push_back(1);
                v.push_back(i+1);
                operation(s1,i);
            }
        }

        cout<<v.size()<<" ";
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";

    }
}
