#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
   int count=0, x=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=x)
        {
            count++;
            x++;
        }

    }
    cout<<count<<endl;
}
