#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,sum=0;
    cin>>n;
    vector<int> a;

    for(int i=0;i<7;i++)
        {
          cin>>v;
          a.push_back(v);
        }
       for(int j=0;j<n;j++){
        for(int i=0;i<7;i++)
        {
          sum+=a[i];
          if(sum>=n)
          {
              cout<<i+1<<endl;
              return 0;
          }
        }
       }
}
