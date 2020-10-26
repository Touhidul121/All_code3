#include<bits/stdc++.h>
using namespace std;
string a,b;

void operation(string s,int ind)
{

    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='0')s[i]='1';
       else if(s[i]=='1')s[i]='0';
    }
    reverse(s.begin(),s.end());

    for(int i=0;i<=ind;i++)
    {
        a[i]=s[i];
    }

}
int main()
{
    int t;
 cin>>t;
 while(t--)
 {

 int n;
 cin>>n;
  cin>>a>>b;
  vector<int>v;


  for(int i=n-1;i>=1;i--)
  {
      if(a[i]!=b[i])
      {
          if(a[0]!=a[i]){
                v.push_back(1);
          a[0]=a[i];
          }
          v.push_back(i+1);
          operation(a.substr(0,i+1),i);
      }
  }
  if(a[0]!=b[0])v.push_back(1);
  cout<<v.size()<<" ";
  for(auto x:v)
    cout<<x<<" ";
  cout<<"\n";
 }
}
