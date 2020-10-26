#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<int>v(n);
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
     sort(v.begin(),v.end());
    if(st.size()==1)
    {
        cout<<0<<" ";
        cout<<(n*(n-1))/(ll)2;
    }
    else
    {
        ll cnt1=1,cnt2=1,i=1,j=n-2;
        while(v[i]==v[0]&& i<n)
        {
           cnt1++;
           i++;
        }

        while(v[j]==v[n-1]&& j>=0)
        {
            cnt2++;
            j--;
        }
        cout<<v[n-1]-v[0]<<" ";
        cout<<cnt1*cnt2<<"\n";
    }
}
