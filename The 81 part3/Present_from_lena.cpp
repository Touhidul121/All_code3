#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n+1;i++)
    {
        //space
        for(int j=0;j<n-i;j++)
            cout<<"  ";
        int k=0,l=0,flag=0;
        while(l<=(2*i+1)/2-1)
        {
            cout<<k<<" ";
            k++;
            l++;
            flag++;
        }
        if(flag>0){


        while(l<(2*i+1)-1)
        {
            cout<<k<<" ";
            --k;
            l++;
        }
        }
        cout<<k;
        cout<<"\n";
    }

    for(int i=n;i>=1;i--)
    {
        //space
        for(int j=0;j<=n-i;j++)
            cout<<"  ";
        int k=0,l=0,flag=0;
        while(l<=(2*i-1)/2-1)
        {
            cout<<k<<" ";
            k++;
            l++;
            flag++;
        }
        if(flag){

        while(l<(2*i-1)-1)
        {
            cout<<k<<" ";
            --k;
            l++;
        }
        }
        cout<<k;
        cout<<"\n";
    }
}
