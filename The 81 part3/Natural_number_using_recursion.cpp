#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return fun(n-1)+n;
}
int main()
{
   cout<<fun(5);
}
