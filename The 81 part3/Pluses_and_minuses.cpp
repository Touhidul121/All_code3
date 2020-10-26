#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll ans=0,limit=0,x=0;

        for(int i=0;i<s.size();i++)
        {

          if(s[i]=='+')x++;
          else x--;
          if(x<limit)
          {
              ans+=(i+1);
              limit=x;
          }
        }
        cout<<ans+s.size()<<"\n";
    }
}
