#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        sort(s.begin(),s.end());

        if(s[0]!=s[k-1])
        {
            cout<<s[k-1]<<"\n";
        }
        else
        {
            if(s[k]==s[n-1])
            {
                cout<<s[0];
                for(int i=0;i<(n-k)/k;i++)
                    cout<<s[k];
                if((n-k)%k)cout<<s[k];
                cout<<"\n";
            }
            else
            {
                cout<<s[0];
                for(int i=k;i<n;i++)cout<<s[i];
                cout<<"\n";
            }
        }
    }
}
