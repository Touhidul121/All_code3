#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    map<int,vector<int>>mp;
     vector<pair<int,int>>ans;
     int sum=0;
     for(int i=0;i<n;i++)
     {
       sum+=arr[i];
       if(sum==0)
       ans.push_back({0,i});

       if(mp.find(sum-0)!=mp.end())
       {
           vector<int>v=mp[sum];

           for(auto x:v)
           {
               ans.push_back({x+1,i});
           }
       }
       mp[sum].push_back(i);
     }

     for(pair<int,int>p:ans)
        cout<<p.first<<" "<<p.second<<" \n";
}
