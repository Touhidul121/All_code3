#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());


    int cnt=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(s<=v[i])cnt++,s+=v[i];

    }
    cout<<cnt<<"\n";
}
