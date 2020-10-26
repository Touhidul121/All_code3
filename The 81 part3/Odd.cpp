#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        n=2*n;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a&1)
                v1.push_back(i+1);
            else
                v2.push_back(i+1);
        }
        if((v1.size()&1 ) && (v2.size()&1))
        {
            v1.pop_back();
            v2.pop_back();
            if(v1.size()>=2){
          for(int i=0;i<v1.size()-1;i+=2)
          {
              cout<<v1[i]<<" "<<v1[i+1]<<"\n";
          }
            }
            if(v2.size()>=2){
          for(int i=0;i<v2.size()-1;i+=2)
          {
              cout<<v2[i]<<" "<<v2[i+1]<<"\n";
          }
            }
        }
        else
        {
            if(v1.size()>v2.size())
            {
                v1.pop_back();
                v1.pop_back();
            }
            else
            {
                v2.pop_back();
                v2.pop_back();
            }
            if(v1.size()>=2){
            for(int i=0;i<v1.size()-1;i+=2)
            {
                cout<<v1[i]<<" "<<v1[i+1]<<"\n";
            }
            }
            if(v2.size()>=2){
            for(int i=0;i<v2.size()-1;i+=2)
          {
              cout<<v2[i]<<" "<<v2[i+1]<<"\n";
          }
            }
        }
    }
}
