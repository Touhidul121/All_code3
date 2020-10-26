#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        int ev=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a&1)
                ev++;
            else
                odd++;
                v.push_back(a);
        }
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                flag=true;
                break;
            }
        }
        if(ev&1 && odd&1 &&flag)
            cout<<"YES"<<"\n";
        else if(!(ev&1)&&!(odd&1))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
