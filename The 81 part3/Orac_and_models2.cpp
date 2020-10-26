#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1),dp(n+1,1);

        for(int i=1;i<=n;i++)
            cin>>v[i];

        for(int i=2;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++) //in normal LIS j(lagging iterator) should be less than i && v[j]<v[i])
            {
                if(i%j==0)          //here candidates(j) are not all the elements whose indices are less than i , here indices are divisors of i and obviously they will be <= i && we should also check v[divisor]<v[i]
                {
                    int x=j;
                    int y=i/j;

                    if(v[x]<v[i])dp[i]=max(dp[i],dp[x]+1);
                    if(v[y]<v[i])dp[i]=max(dp[i],dp[y]+1);
                }
            }
        }
        cout<<*max_element(dp.begin(),dp.end())<<"\n";
    }
}
