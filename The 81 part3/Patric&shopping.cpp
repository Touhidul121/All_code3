#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,d3,x,y,p,q;
    cin>>d1>>d2>>d3;

    x=d1+d3+d2;
    y=2*(d1+d2);
    p=2*(d1+d3);
    q=2*(d2+d3);
    cout<<min(min(x,y),min(p,q))<<endl;
}
