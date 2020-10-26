#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;


        int x=0,y=0,flag=0;

        while(x>=0)
        {
          x=(n-y*b)/a;
          if(a*x+b*y==n&&x>=0){
                flag++;
                break;
          }
          y++;
        }

        if(flag>0){
            cout<<"YES"<<endl;
        cout<<x<<" "<<y<<endl;
        }
        else
            cout<<"NO"<<endl;



}
