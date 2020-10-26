#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n),v1;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    for(auto x:s)
        v1.push_back(x);
    for(auto x:s)
    {
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=x&&v1[i]%x==0)
            {
                s.erase(v1[i]);
            }
        }
    }
    cout<<s.size()<<endl;


}
