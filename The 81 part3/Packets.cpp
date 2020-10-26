#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,i=0,sum=0;
    cin>>n;

    while(sum<n)
    {
        sum+=(1<<i);
        i++;
        count++;
    }
    cout<<count<<"\n";
}
