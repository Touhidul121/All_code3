#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d,a,x;
    cin>>n>>m>>d;
    vector<int>v;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)cin>>a, v.push_back(a);

        sort(v.begin(),v.end());
        int median=v[(n*m)/2];

        int moves=0;
        bool f=false;

        for(int i=0;i<n*m;i++)
        {
            x=abs(median-v[i]);

            if(x%d!=0)
            {
                f=true;
                break;
            }
            else moves+=(x/d);
        }
        if(f)
            cout<<-1<<"\n";
        else
            cout<<moves<<"\n";
}
