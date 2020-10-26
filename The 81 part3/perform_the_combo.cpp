#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
    int n,m;
    string s;
    cin>>n>>m>>s;
    int p;
    //-----dummy array to keep track of wrong button press------
    vector<int> v1(n);
    for(int i=0;i<m;i++)
    {
        cin>>p;
        v1[p-1]++;
    }

    //----------suffix sum to keep count---

    for(int i=n-1;i>=1;i--)
    {
        v1[i-1]=v1[i-1]+v1[i];
    }

    //------array to display the number of times of pressing all the alphabets

    vector<int> v2(26);

    for(int i=0;i<n;i++)
    {
        v2[s[i]-'a']=v2[s[i]-'a']+v1[i];
        v2[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    }

}
