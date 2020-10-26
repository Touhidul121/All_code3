#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m],pref[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>arr[i][j],pref[i][j]=0;


    pref[0][0]=arr[0][0];
    for(int i=1;i<m;i++)
        pref[0][i]=arr[0][i]+pref[0][i-1];

    for(int i=1;i<n;i++)
        pref[i][0]=arr[i][0]+pref[i-1][0];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            pref[i][j]=arr[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<pref[i][j]<<" ";
        }
        cout<<"\n";
    }
}
