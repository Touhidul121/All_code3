#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       char a[n][n];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
            cin>>a[i][j];
       }
       bool flag=false;
       for(int i=0;i<n-1;i++)
       {
           for(int j=0;j<n-1;j++)
           {
               if(a[i][j]=='1')
               {
                   if(a[i][j+1]!='1'&&a[i+1][j]!='1')
                   {
                       flag=true;
                       break;
                   }
               }
           }
       }
       if(flag)
        cout<<"NO"<<"\n";
       else
        cout<<"YES"<<"\n";
   }
}
