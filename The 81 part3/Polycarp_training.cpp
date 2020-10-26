#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
int j=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=j)
        {
            count++;
            j++;
        }
    }
    cout<<count<<endl;
}
