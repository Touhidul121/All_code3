#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=res*a; n--; // at least once the power will be odd then we will increase our ans .ans will be correct because a will be changed accordingly
        }
        n=n/2; // power decrease by power of two as we are increasing base(a) as power of two
        a=a*a; // we can write a4=a^2 * a^2 and a^2=a*a
    }
    return res;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<"\n";
}
