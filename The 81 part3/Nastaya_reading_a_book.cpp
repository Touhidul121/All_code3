#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i=0;
    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    int desired;
    cin>>desired;

    for( i=0;i<v.size();i++)
    {
        if(desired>=v[i].first&&desired<=v[i].second)
            break;
    }

    cout<<n-i<<endl;
}
