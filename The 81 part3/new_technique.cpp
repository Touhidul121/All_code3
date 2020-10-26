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
        int n,m,x;
        cin>>n>>m;
        int a[m][n],b[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>b[i][j];
            }
        }
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int k=0,l=0;
        for(int j=0;j<n;j++)
        {
            l=0;
            for(int i=0;i<m;i++)
            {
                v[k][l]=a[i][j];
                l++;
            }
            k++;
        }
        int x=b[0][0];
        int x_loc,y_loc;
        bool f=false;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(x==v[i][j])
                {
                  x_loc=i,y_loc=j;f=true;break;
                }
            }
            if(f)break;
        }
        map<int,int>loc;
        for(int i=0;i<m;i++)
            mp[]

    }
}
