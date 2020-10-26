#include<bits/stdc++.h>
using namespace std;
int arr[15];
int n,l,r,x;
vector<vector<int>>ans;
void solve(int pos,vector<int>v)
{
    if(pos>=n)
    {
        ans.push_back(v);return;
    }
    v.push_back(arr[pos]);
    solve(pos+1,v);
    v.pop_back();
    solve(pos+1,v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>v;

    solve(0,v);

    int cnt=0;
    for(vector<int>v:ans)
    {
        if(v.size()>=2)
        {
            int sum=0;
            for(int i=0;i<v.size();i++)
                sum+=v[i];
            int mx=*max_element(v.begin(),v.end());
            int mn=*min_element(v.begin(),v.end());
            if(sum>=l && sum<=r && mx-mn>=x)
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}
