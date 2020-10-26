#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(b&1 && a%2==0)
            swap(a,b);
            if(a==0 && b==0)
                cout<<"YES"<<"\n";
            else if(a==b)
                cout<<"NO"<<"\n";
       else if((a&1)&&(b&1))
        cout<<"NO"<<"\n";
        else if(a%2==0 && b%2==0)
        {
            if(min(a,b)*2==max(a,b))
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
        else{
            if(a==1 && b==2)
                cout<<"YES"<<"\n";
            else if(a<b)
                {
                 if((a-1)*2==b-2)
                        cout<<"YES"<<"\n";
                 else
                    cout<<"NO"<<"\n";
                }
                else
                {
                    if((b-2)*2==(a-1))
                    cout<<"YES"<<"\n";
                    else
                        cout<<"NO"<<"\n";
                }

        }
    }
}
