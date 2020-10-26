#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>arr[i][j];

    for(int k=0;k<n;k++)
    {
        int i=k;
        int j=0;

        while(i>=0)
        {
            cout<<arr[i][j]<<" ";
            i-=1;
            j+=1;
        }
        cout<<"\n";
    }

    for(int k=1;k<m;k++)
    {
        int i=m-1;
        int j=k;

        while(j<m)
        {
            cout<<arr[i][j]<<" ";
            i-=1;
            j+=1;
        }
        cout<<"\n";
    }
}
