#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int a[n]={1,5,2,9,3};
    int k=7;
    unordered_map<int,int>mp;
    int i=0,sum=0,cnt=0;
    while(i<n)
    {
        sum+=a[i];
        if(sum==k)
            cnt++;
        if(mp.find(sum-k)!=mp.end())
        {
            cnt+=mp[sum-k];
        }
        mp[sum]++;
        i++;
    }
    cout<<cnt<<"\n";
}
