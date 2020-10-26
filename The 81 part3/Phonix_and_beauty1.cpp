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
        int n,k,a;
        cin>>n>>k;
        set<int>st;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            st.insert(a);

        }
        if(st.size()>k)
            cout<<-1<<"\n";
        else
        {
          for(auto x:st)
                v.push_back(x);
          for(int i=0;i<k-st.size();i++)
                v.push_back(1);
          cout<<n*k<<"\n";
          for(int i=0;i<n*k;i++)
          {
              cout<<v[i%k]<<" ";
          }
          cout<<"\n";
        }
    }
}
