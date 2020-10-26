#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<max(a*c,max(a*d,max(b*c,b*d)))<<"\n";
}
