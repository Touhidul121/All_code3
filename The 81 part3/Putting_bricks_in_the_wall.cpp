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
        char s[n][n],s1[n][n],s3[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s[i][j];
                s1[i][j]=s[i][j];
                s3[i][j]=s[i][j];
            }
        }
        int cnt1=0,cnt2=0;
        s[0][1]=s[1][0]='1';
        s[n-1][n-2]=s[n-2][n-1]='0';

        s1[0][1]=s1[1][0]='0';
        s1[n-1][n-2]=s1[n-2][n-1]='1';

        vector<pair<int,int>>v1,v2;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]!=s3[i][j])
            {
                cnt1++;
                v1.push_back({i+1,j+1});
            }
        }

        }
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(s1[i][j]!=s3[i][j])
            {
                cnt2++;
                v2.push_back({i+1,j+1});
            }
        }

        }
        if(cnt1<=cnt2){
                cout<<cnt1<<"\n";
        for(pair<int,int>p:v1)
            cout<<p.first<<" "<<p.second<<"\n";
        }
        else
        {
            cout<<cnt2<<"\n";
            for(pair<int,int>p:v2)
            cout<<p.first<<" "<<p.second<<"\n";
        }
    }
}
