

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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cin>>b[i];
    oset<ar<ll,2>> st;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=st.order_of_key({a[i]-b[i],0});
        st.insert({b[i]-a[i],i});
    }
    cout<<ans<<"\n";

}
