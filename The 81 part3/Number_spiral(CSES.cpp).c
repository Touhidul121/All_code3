#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ll y,x;
 cin>>y>>x;
 ll z=max(y,x);
 if(x%2==0)
        cout<<z*z<<"\n";
 else
    cout<<z*z-(2*(z-1))<<"\n";
}
