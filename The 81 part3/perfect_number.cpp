#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum1=0;
    while(n>0)
    {
        sum1+=n%10;
        n=n/10;
    }
    return sum1;
}
int main()
{
    int n;
    cin>>n;
    int x=0;

    while(n)
    {
        x++;
        if(sum(x)==10)
        {
            n--;
        }
    }
    cout<<x<<endl;
}
