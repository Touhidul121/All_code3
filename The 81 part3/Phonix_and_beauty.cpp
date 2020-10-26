#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k,a;
        cin>>n>>k;


        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>a;

            s.insert(a);
        }




        if(s.size()>k)
            cout<<-1<<"\n";
        else
        {

            vector<int>v1;
            int x=k-s.size();

            for(auto x:s)
            {
                v1.push_back(x);
            }
            //cout<<x<<"\n";
            for(int i=1; i<=x; i++)
                v1.push_back(1);
            cout<<n*k<<"\n";
            for(int j=0; j<n*k; j++)
            {

                cout<<v1[j%v1.size()]<<" ";


            }
            cout<<"\n";


        }
    }
}

