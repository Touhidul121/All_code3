#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];

        for(int i=0;i<n;i++)
            cin>>s[i];

        bool f=false;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
               if(s[i][j]=='1')
               {
                   if(s[i][j+1]=='0'&&s[i+1][j]=='0')
                   {
                       f=true;break;
                   }
               }
            }
        }
        if(f)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
