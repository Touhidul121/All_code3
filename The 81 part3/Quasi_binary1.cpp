#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>ans;
    while(n)
    {
        int temp=n;
        string s="";
        while(temp)
        {
          if(temp%10==0)
                s+='0';
          else
                s+='1';
          temp/=10;
        }
        reverse(s.begin(),s.end());
        int d=stoi(s);
        ans.push_back(d);
        n-=d;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int x:ans)
        cout<<x<<" ";
}
