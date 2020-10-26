#include<bits/stdc++.h>
using namespace std;

void solve(string s,int n,int ones,int zeros)
{

  if(zeros>ones)return;
  if(n==0)
  {
      cout<<s<<"\n";return;
  }

  solve(s+'1',n-1,ones+1,zeros);
  solve(s+'0',n-1,ones,zeros+1);
}
int main()
{
    int n;
    cin>>n;
    solve("",n,0,0);
}
