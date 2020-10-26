#include<bits/stdc++.h>
using namespace std;

int n;
void solve(string s,int pos,string ans)
{
    if(pos==n)
    {
        cout<<ans<<"\n";return;
    }


    solve(s,pos+1,ans+' '+s[pos]);
    solve(s,pos+1,ans+s[pos]);


}
int main()
{
    string s;
    cin>>s;
    n=s.size();
    string x="";
    x+=s[0];
    solve(s,1,x);
}
