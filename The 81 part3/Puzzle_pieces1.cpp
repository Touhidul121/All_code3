#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int row,col;
        cin>>row>>col;
        if(row==1 && col==1)
            cout<<"YES"<<"\n";
        else if(col>2 && row>2)
            cout<<"NO"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
