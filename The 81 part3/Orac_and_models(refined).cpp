#include<bits/stdc++.h>
using namespace std;

set<int>st;

void get_div(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {

                st.insert(i);
                st.insert(n/i);

        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {

        int n,res=0;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)cin>>arr[i];

        for(int i=1;i<=n;i++)
        {
           get_div(i);
           vector<int>v;
           for(auto x:st)
                v.push_back(x);

           vector<int>dp(n+1,1);
           for(int j=1;j<v.size();j++)
           {
               for(int k=0;k<j;k++)
               {
                   if(arr[v[k]]<arr[v[j]] && v[j]%v[k]==0)
                   {
                     if(dp[v[k]]==dp[v[j]])
                        dp[v[j]]++;
                   }
               }
           }
           int mx=*max_element(dp.begin(),dp.end());

           res=max(res,mx);
           st.clear();
        }
        cout<<res<<"\n";
    }
}
