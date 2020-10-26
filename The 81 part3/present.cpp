#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
map<int,int> mp;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
     mp[a]=i;
    }


    int j=1;

    for(int i=1;i<=n;i++)
    {
        for(auto x:mp)
        {
            if(i==x.first)
            {
                cout<<x.second<<" ";
            }
        }
    }

    cout<<endl;
}
