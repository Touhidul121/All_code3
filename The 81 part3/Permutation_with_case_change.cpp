#include<bits/stdc++.h>
using namespace std;

int n;
void solve(string s,int pos,string ans)
{
    if(pos==n)
    {
        cout<<ans<<"\n";return;
    }
    if(s[pos]>='0'&&s[pos]<='9')
        solve(s,pos+1,ans+s[pos]);
    else{
    char x1=tolower(s[pos]);
    solve(s,pos+1,ans+x1);
    char x2=toupper(s[pos]);
    solve(s,pos+1,ans+x2);
    }


}
int main()
{
    string s;
    cin>>s;
    n=s.size();
    solve(s,0,"");
}

