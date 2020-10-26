#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,k,count1=0;
    cin>>b>>k;
    vector<int> v;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        if(a&1)
            count1++;
        v.push_back(a);
    }
    if(b&1&&count1%2==0)
    {
        cout<<"even"<<endl;
    }
    else if(b&1&&count1&1)
        cout<<"odd"<<endl;
    else if(b%2==0&&v[k-1]&1)
        cout<<"odd"<<endl;
    else if(b%2==0&&v[k-1]%2==0)
        cout<<"even"<<endl;

}
