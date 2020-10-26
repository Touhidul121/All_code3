#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n,x,a,b,c;
    double m;

    cin>>n;
    ll count=0;

    for(int i=1;i<=n;i++)
    {
    m=sqrt(i+1);

    {
        m=(int)m;
        a=m*m-1;
        b=2*m;
        c=m*m+1;
        if(a>0&&b>0&&c>0){
            cout<<a<<" "<<b<<" "<<c<<" \n";
            count++;
        }
    }
cout<<count<<endl;

}
}
