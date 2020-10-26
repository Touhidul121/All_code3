#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int i=n/2-1;
    int j=n/2;
    int count=0;
    char prev,next;

    while(i>=0&&j<n)
    {

        if(s[i]==s[j])
            count++;


             else if(abs(s[i]-s[j])==2)
                count++;


            i--;
            j++;
    }
    if(count==n/2)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        fun();
    }
}
