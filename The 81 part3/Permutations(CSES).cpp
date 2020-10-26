#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
        if(n==1)
            cout<<1<<"\n";
        else
      if(n<=3)
        cout<<"NO SOLUTION"<<"\n";
      else{
    for(int i=n-2;i>=0;i-=2)
    {
     cout<<v[i]<<" ";
    }

    for(int i=n-1;i>=0;i-=2)
        cout<<v[i]<<" ";
    cout<<"\n";
      }

}
