#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long ans=0,cur=0,lim=0;
           for(int i=0;i<s.size();i++)
           {
               if(s[i]=='+')
                cur++;
               else
                cur--;
               if(cur<lim)
               {
                   ans+=i+1;
                   lim=cur;
               }
           }


        cout<<(long long)ans+s.size()<<"\n";
    }
}
