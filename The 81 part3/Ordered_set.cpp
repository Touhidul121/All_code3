
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
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int l,a;
        cin>>l;

        for(int i=0;i<l;i++)
        {
            cin>>a;
            v.push_back(a);
        }
    }
    oset<array<int,2>>s;
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        cnt+=s.order_of_key({v[i],0});
        s.insert({v[i],i});
    }
    cout<<cnt<<"\n";
}
