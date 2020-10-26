#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=1;i<=n;i++)
            cin>>ar[i];
        bool f1=false,f2=false,f3=false,f4=false,f5=false,f6=false;

        int i=1;

        while(i<=n &&i==ar[i])i++;
        if(i>n)f5=true;

        i=1;
        while(i<=n && i!=ar[i])
            i++;

        if(i>n)f1=true;
        else
        {
            while(i<=n && i==ar[i])
                i++;
            if(i>n)f2=true;
        }
        i=n;
        while(i>=1 && i!=ar[i])
            i--;
        if(i==0)f3=true;
        else
        {
            while(i>=1 && i==ar[i])
                i--;
            if(i==0)f4=true;
        }
        i=1;
        int j=n;
        while(i<=n && i==ar[i])
            i++;
        while(j>=1 && j==ar[j])
            j--;
        int k=i;
        while(k<=n && ar[k]!=k)k++;

        if(k-1==j)f6=true;
        if(f5)
            cout<<0<<"\n";
        else
        if(f1 || f2 || f3 || f4 || f6)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
}
