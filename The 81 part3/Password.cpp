#include<bits/stdc++.h>
using namespace std;

vector<int> createlps(string pattern)
{
    vector<int> lps(pattern.size());

    int j=0,i=1;
    while(i<pattern.size())
    {
        if(pattern[i]==pattern[j])
        {
            lps[i]=j+1;
            i++;j++;
        }
        else
        {
            if(j!=0)
                j=lps[j-1];
            else j=0,lps[i]=0,i++;
        }
    }
    return lps;
}
set<int>st;
void kmp(string text,string pattern)
{
    vector<int>lps=createlps(pattern);

    int i=0,j=0,cnt=0;
    bool f=false;
    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++,j++;
        }
        else
        {
            if(j!=0)j=lps[j-1];

            else i++;
        }
        if(j==pattern.size())
        {
            st.insert(i-pattern.size());
            j=lps[j-1];
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin>>s;
    vector<int> v=createlps(s);

    int mx=0;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        //mx=max(mx,v[i]);

    if(mx==0)
    {
        cout<<"Just a legend"<<"\n";
    }
    else
    {
        mx=0;
        cout<<s.size()<<"\n";
        for(int i=0;i<v.size();i++)
        {
          if(s.size()-3*v[i]>=0)
            mx=max(mx,v[i]);
        }
        cout<<mx<<"\n";
        string s1=s.substr(0,mx);
        cout<<s1<<"\n";
        //kmp(s,s1);
//        for(auto x:st)
//        {
//            if(x>=mx && x<s.size()-mx)
//            {
//                cout<<s1<<"\n";return 0;
//            }
//        }
        cout<<"Just a legend"<<"\n";
    }
}
