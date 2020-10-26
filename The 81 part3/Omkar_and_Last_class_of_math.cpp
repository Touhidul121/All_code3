#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int max_div=1;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0 )
            {
             if(i<=n/2)
                    max_div=max(max_div,i);
             if(n/i<=n/2)
                    max_div=max(max_div,n/i);
            }
        }
        cout<<max_div<<" "<<n-max_div<<"\n";
    }
}
