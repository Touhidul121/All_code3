#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;

    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);

    }

    for(int i=0; i<=pow(2,n-1); i++)
    {
        sum=0;
        for(int j=0; j<=n-1; j++)
        {
            if(i&(1<<j))
                sum+=v[j];
            else
                sum-=v[j];
        }


        if(sum%360==0)
        {
            cout<<"YES"<<"\n";
            return 0;
        }

    }
    cout<<"NO"<<"\n";
}
