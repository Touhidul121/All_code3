#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,r;
    cin>>n; //no of  array elements
    int val[n+1]={0};

     int q;
     cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        l--;
        val[l]++;
        val[r]--;
    }

    for(int i=0;i<n;i++)
        val[i+1]+=val[i];
    sort(val,val+n+1,greater<int>());

    for(int i=0;i<=n;i++)
    {
        cout<<i+1<<"th cell appears "<<val[i]<<" th times"<<"\n";
    }

}
