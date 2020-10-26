#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v(3005);
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v[a]++;
    }
    for(int i=1;i<=30005;i++)
    {
        if(!v[i])
        {
            cout<<i<<"\n";
            return 0;
        }
    }
}
