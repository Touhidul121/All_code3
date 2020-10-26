#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos;
    cin>>n>>pos;

      if(pos<=n/2)
        cout<<n*3+pos-1<<"\n";
      else
        cout<<n*3+n-pos<<"\n";



}
