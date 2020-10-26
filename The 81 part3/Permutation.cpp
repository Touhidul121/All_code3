#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,count=0;
    cin>>n;

    set<int> s;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    for(auto x:s)
    {
        if(x<=n)
            count++;
    }
    cout<<n-count<<endl;
}
