#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

            cout<<min((x+y+z)/3,min(x,y))<<"\n";


    }
}
