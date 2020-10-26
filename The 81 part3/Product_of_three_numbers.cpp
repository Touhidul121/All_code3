#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        vector<int>v,v1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i==n/i)
                    v.push_back(i);
                else
                {
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        if(v.size()>2){
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]/2<n/2)
                v1.push_back(v[i]);
        }
        bool flag=false;
        for(int i=0;i<v1.size()-2;i++)
        {

            for(int j=i+1;j<v1.size()-1;j++)
            {
               for(int k=j+1;k<v1.size();k++)
               {

                   flag=false;
                   if(v1[i]*v1[j]*v1[k]==n)
                   {
                       flag=true;
                       cout<<"YES"<<"\n";
                       cout<<v1[i]<<" "<<v1[j]<<" "<<v1[k]<<"\n";
                       break;
                   }
               }
               if(flag)
                break;
            }
            if(flag)
                break;
        }
        if(!flag)
        cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
