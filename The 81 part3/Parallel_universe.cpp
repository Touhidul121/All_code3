#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,t;
    cin>>n>>k>>m>>t;
    int l=n;

    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            if(b<=k)
            {
                k+=1;
                l+=1;
            }
            else
            {
                l+=1;
            }
            cout<<l<<" "<<k<<"\n";
        }
        else
        {
            if(b>=k)
            {
                l=b;
            }
            else
            {
                l-=b;
                k-=b;
            }
            cout<<l<<" "<<k<<"\n";
        }
    }
}
