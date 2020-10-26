#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int x,a,b,c;
    x=(x1*x3)/x2;
    b=sqrt(x);
    a=x1/b;
    c=x2/a;

    cout<<4*a+4*b+4*c<<endl;
}
