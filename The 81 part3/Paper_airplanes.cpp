#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int need,total_need,total_pack;

    need=(int)ceil(n/(s*1.0));

    total_need=need*k;

    total_pack=(int)ceil(total_need/(p*1.0));
    cout<<total_pack<<endl;
}
