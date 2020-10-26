#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,a,b,c;
        cin>>n;
        int left[n+1]={},right[n+1]={};
        int w_left=0,w_right=0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if(left[a]==false && right[b]==false)
            {
                left[a]=right[b]=true;
                w_left+=c;
            }
            else
            {
                right[a]=left[b]=true;
                w_right+=c;
            }
        }
        cout<<"Case "<<tc<<": "<<min(w_left,w_right)<<"\n";
    }
}
