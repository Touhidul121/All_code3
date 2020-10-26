#include<bits/stdc++.h>
using namespace std;

int compare(char first,char second)
{
    if(first==second)
        return 0;
    if(first=='R')
    {
        if(second=='S')
            return 1;
        else
            return -1;
    }
    if(first=='P')
    {
        if(second=='R')
            return 1;
        else
            return -1;
    }
    if(first=='S')
    {
        if(second=='P')
            return 1;
        else
            return -1;
    }
}

pair<int,int> countwins(int k,string a,string b)
{
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    int moves=n*m;
    pair<int,int> wins={0,0};

    while(moves--)
    {
        int res=compare(a[i],b[j]);
        if(res==1)
            wins.first++;
        if(res==-1)
            wins.second++;
        i=(i+1)%n;
        j=(j+1)%m;
    }

    int repeat=k/(n*m);
    wins.first*=repeat;
    wins.second*=repeat;

    int rem=k%(n*m);

    while(rem--)
    {
        int res=compare(a[i],b[j]);
        if(res==1)
            wins.first++;
        if(res==-1)
            wins.second++;

        i=(i+1)%n;
        j=(j+1)%m;
    }
    return wins;
}

int main()
{
    int k;
    cin>>k;
    string str1,str2;
    cin>>str1>>str2;
    pair<int,int> ans=countwins(k,str1,str2);
    cout<<ans.first<<" "<<ans.second<<"\n";
}
