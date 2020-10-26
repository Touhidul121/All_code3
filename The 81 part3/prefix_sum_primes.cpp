#include<bits/stdc++.h>
using namespace std;



int main()
{


    int n,a;
    cin>>n;
    int cnt1=0,cnt2=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
       cin>>a;
       if(a==1)
            cnt1++;
       else
        cnt2++;
    }
    if(cnt1&1)
    {
        if(cnt2>0)
            cout<<2<<" ";
        for(int i=0;i<cnt1;i++)
            cout<<1<<" ";
        for(int i=0;i<cnt2-1;i++)
            cout<<2<<" ";
            cout<<"\n";
    }
    else
    {
        if(cnt2>0)
            cout<<2<<" ";
        for(int i=0;i<cnt1-1;i++)
            cout<<1<<" ";
        for(int i=0;i<cnt2-1;i++)
            cout<<2<<" ";
            if(cnt1>1)
        cout<<1<<"\n";
    }
}
