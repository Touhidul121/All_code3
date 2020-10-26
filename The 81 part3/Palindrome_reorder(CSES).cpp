#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.size(),cnt=0;
    map<char,int>mp;

    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second &1)cnt++;
    }
    if(cnt>1)
        cout<<"NO SOLUTION"<<"\n";
    else
    {
    string ans,odd;
    for(auto x:mp)
    {

        if(x.second>0 && x.second%2==0)
        {
            ans+=string(x.second/2,x.first);
        }
        else
            odd+=string(x.second,x.first);
    }
    cout<<ans;
    reverse(ans.begin(),ans.end());
    cout<<odd;
   cout<<ans<<"\n";
    cout<<"\n";
    }
}
