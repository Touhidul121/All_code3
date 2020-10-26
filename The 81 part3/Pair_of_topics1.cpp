#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define ar array

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,ans=0;
    cin>>n;
    ll a[n],b[n];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    oset<pair<int,int>>st;

    for(int i=n-1;i>=0;i--)
    {
        ans+=st.order_of_key({a[i]-b[i],0});
        st.insert({b[i]-a[i],i});
    }
    cout<<ans<<"\n";
}
