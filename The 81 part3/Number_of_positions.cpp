#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int rest=n-a;
    if(rest<=0)
        cout<<0<<endl;
    else if(rest>b+1)
        cout<<b+1<<endl;
    else
        cout<<rest<<endl;
}
