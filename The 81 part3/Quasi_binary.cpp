#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,val;
    cin>>n;
    string s;
    vector<int>ans;
    while(n>0)
    {
        temp=n;
        while(temp>0)
        {
          if(temp%10)
                s+='1';
          else
            s+='0';
          temp/=10;
        }
        reverse(s.begin(),s.end());
        val=stoi(s);
        ans.push_back(val);
        n-=val;
        s.clear();
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans)
        cout<<x<<" ";

}
