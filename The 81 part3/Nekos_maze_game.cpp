#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,q,a,b;
    cin>>n>>q;
    int v[3][n+5];
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<=n+1;j++)
            v[i][j]=0;
    }
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        v[a][b]++;
        if(v[a][b]%2==0)
            v[a][b]=0;
        int j;
        bool flag=false;
        for( j=1;j<n;j++)
        {

            if(v[2][j]==1)
            {
                if((v[1][j]==1)||(v[1][j-1]==1)||(v[1][j+1]==1))
                {
                    flag=true;
                    break;
                }
            }
        }
         if(flag)
            cout<<"No"<<"\n";
         else
            cout<<"Yes"<<"\n";

    }
}
