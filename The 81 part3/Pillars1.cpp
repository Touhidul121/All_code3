#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int pos=max_element(v.begin(),v.end())-v.begin();

    bool res=true;

    for(int i=0;i<pos;i++)
        res&=(v[i]<v[i+1]);

    for(int i=pos;i<n-1;i++)
        res&=(v[i]>v[i+1]);

    if(res)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
