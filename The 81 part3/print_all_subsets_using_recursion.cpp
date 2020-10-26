#include<bits/stdc++.h>
using namespace std;

void print_subsets(string s,int pos,string ans)
{
    if(pos==s.size())
    {
        cout<<ans<<"\n";return;
    }
    print_subsets(s,pos+1,ans+s[pos]);
    print_subsets(s,pos+1,ans);
}
int main()
{
    string s;
    cin>>s;
    print_subsets(s,0,"");
}
