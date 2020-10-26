
/*find number of multiples of a in range l to r
ans=f(r)-f(l-1);
here f(n)=(n/a)+1;
if(n==-1) f(-1)=0;
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long l,r,a,ans=0;
    cin>>l>>r>>a;

    ans+=(r/a)+1;
    l-=1;
    if(l==-1)ans-=0;
    else ans-=(l/a)+1;


    cout<<ans<<"\n";
}
