#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    if(n==1&&t==10)
        cout<<-1<<"\n";
    else
    {
        for(int i=0;i<n;i++)
            cout<<t;
            cout<<"\n";
    }
}
