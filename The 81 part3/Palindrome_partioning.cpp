#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int i,int j)
{
    string r=s.substr(i,j-i+1);
    string x=r;
    reverse(x.begin(),x.end());

    if(r==x)return true;
    else return false;
}

int solve(string s,int i,int j)
{
    if(i>=j)
        return 0;
    if(isPalindrome(s,i,j)==true)
        return 0;
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=1+solve(s,i,k)+solve(s,k+1,j);
        if(temp<mn)
            mn=temp;
    }

    return mn;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    set<int>st;
    int cnt=0;
    for(char x:s)cnt++, st.insert(x);
cout<<isPalindrome(s,0,s.size()-1)<<"\n";
    cout<<cnt<<"\n";
}
