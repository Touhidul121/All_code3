#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x,count=0;
    x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='4'||s[i]=='7')
           count++;
    }
    if(count==7||count==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
