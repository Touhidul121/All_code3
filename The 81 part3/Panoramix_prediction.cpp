#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag=0;
    cin>>n>>m;

    for(int i=n+1;i<=n+15;i++)
    {
        flag=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            flag++;
        }
        if(flag==0)
        {
            if(i==m)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            return 0;
        }
    }
}
