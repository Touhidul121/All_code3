#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n),v1(m),res;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
        cin>>v1[i];
    sort(v.begin(),v.end());
    int val;
    for(int i=0;i<m;i++)
    {
      val=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
      res.push_back(val);
    }
    for(auto x:res)
        cout<<x<<" ";
}
