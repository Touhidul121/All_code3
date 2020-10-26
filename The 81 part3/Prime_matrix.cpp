#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>b(1000007);
vector<int>v;
void sieve(int n)
{
    for(int i=4;i<=n;i+=2)
        b[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(b[i]==0){
        for(int j=i*i;j<=n;j+=i)
        {
            b[j]=1;
        }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(b[i]==0){
                //cout<<i<<" ";
            v.push_back(i);
        }
    }
}

bool isPrime(int n)
{
if(n==1)
return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 sieve(1000007);

 int n,m,count=0,x=0,y=0,count1=0;
 cin>>n>>m;
 vector<int>v1,v2;

 int a[n][m];

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>a[i][j];
         if(isPrime(a[i][j]))
            continue;
         else
         {

            int k=0;
             k=upper_bound(v.begin(),v.end(),a[i][j])-v.begin();
             x=v[k];
             //cout<<x<<" ";
             count+=(x-a[i][j]);
//cout<<count<<endl;
         }
     }
     //cout<<count<<" ";
     v1.push_back(count);
     count=0;
 }

  for(int j=0;j<m;j++)
  {
      for(int i=0;i<n;i++)
      {
          if(isPrime(a[i][j]))
            continue;
          else
          {
              int l=0;
              while(a[i][j]>v[l])
              {
                  l++;
              }
              y=v[l];
              count1+=(y-a[i][j]);
          }
      }
      v2.push_back(count1);
      count1=0;
  }
  int m1,m2;
  m1=*min_element(v1.begin(),v1.end());
  m2=*min_element(v2.begin(),v2.end());
  cout<<min(m1,m2)<<endl;
}
