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
        int n,a;
        cin>>n;
        int mx=INT_MIN,diff=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            mx=max(a,mx);
            diff=max(diff,mx-a);
        }
        if(diff==0)
            cout<<0<<"\n";
        else
        cout<<(int)log2(diff)+1<<"\n";
    }
}
