#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a;
    cin>>n>>m;
    vector<int>v1;
    for(int i=0;i<n;i++)
        cin>>a , v1.push_back(a);
    sort(v1.begin(),v1.end());

    for(int i=0;i<m;i++){
        cin>>a;
        int ind=upper_bound(v1.begin(),v1.end(),a)-v1.begin();
        cout<<ind<<" ";
    }



}
