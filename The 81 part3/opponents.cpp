#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,count1=0,count=0,m=1,flag=0;
    cin>>d>>n;

    string s;
    vector<int>v,v1;

    for(int i=0;i<n;i++)
    {

        cin>>s;
        count1=0;
        for(int j=0;j<d;j++)
        {
            if(s[j]=='1')
                count1++;
        }

        if(count1==d)
            v.push_back(0);
        else
            v.push_back(1);
    }
for(int i=0;i<v.size();i++)
{
    if(v[i]==1)
        count++;
    v1.push_back(count);
    if(v[i]==0)
        count=0;
}

cout<<*max_element(v1.begin(),v1.end())<<endl;
}
