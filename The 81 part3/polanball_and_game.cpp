#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<string>v1,v2;
    string s;
    set<string>s1;

    int count=0;
    for(int i=0;i<n+m;i++)
    {
      cin>>s;
      if(s1.count(s))
        count++;
      s1.insert(s);
    }
//cout<<count<<"\n";
if(n>m)
    cout<<"YES"<<"\n";
    else if(m>n)
        cout<<"NO"<<"\n";
        else if(count%2==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }

