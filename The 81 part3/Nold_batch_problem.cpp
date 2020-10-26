#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x=0,count=0;
    cin>>n>>k;
    n=n+1;
    vector<int> v;
    int a[1000]={0};

    for(int i=4;i<=n;i+=2)
        a[i]=1;

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(a[i]==0){
        for(int j=i*i;j<n;j+=i)
        {
           a[j]=1;
        }
        }
    }
    for(int i=2;i<=n;i++)
    {

        if(a[i]==0)
            v.push_back(i);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        x=v[i]+v[i+1]+1;


            if(binary_search(v.begin(),v.end(),x))
            count++;
    }
    //cout<<count<<endl;
    if(count>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
