#include<bits/stdc++.h>
using namespace std;

bool isAlpha(char ch)
{
    if(ch>='A'&&ch<='Z')
        return true;
    else
        return false;
}
int main()
{
    int n,m;

    cin>>n>>m;
    char x;
    cin>>x;
    char v[n+2][m+2];
    for(int i=0;i<n+2;i++)
    {
        for(int j=0;j<m+2;j++)
            v[i][j]='0';
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        cin>>v[i][j];
        set<char>st;
    int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {

            if(v[i][j]==x)
            {


                        st.insert(v[i][j+1]);


                        st.insert(v[i][j-1]);

                        st.insert(v[i+1][j]);

                        st.insert(v[i-1][j]);



            }
        }

    }
     ans=st.size();
    if(st.find('.')!=st.end())
        ans--;
    if(st.find('0')!=st.end())
        ans--;
    if(st.find(x)!=st.end())
        ans--;
cout<<ans<<"\n";

}


