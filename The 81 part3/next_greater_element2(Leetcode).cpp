#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);
        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++)
        {
            bool f1=false,f2=false;

            for(int j=i+1;j<n;j++)
            {

                if(v[j]>v[i])
                {
                    ans.push_back(v[j]);
                    f1=true;break;
                }
            }
            if(!f1)
            {
                for(int j=0;j<i;j++)
                {
                    if(v[j]>v[i])
                    {
                        ans.push_back(v[j]);
                        f2=true;break;
                    }
                }
            }
            if(!f1 && !f2)ans.push_back(-1);
        }
        for(int x:ans)
            cout<<x<<" ";

}
