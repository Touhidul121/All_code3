#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt1=0,cnt2=0;

        if(n==1)
            cout<<"FastestFinger"<<"\n";
        else
        {
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(i==2)
                    {
                        while(n%i==0)
                        {
                            cnt1++;
                            n=n/i;
                        }
                    }
                    else
                    {
                        while(n%i==0)
                        {
                            cnt2++;
                            n=n/i;
                        }
                    }
                }
            }
            if(n>1)
            {
                if(n==2)cnt1++;
                else cnt2++;
            }
            if(cnt1==0)
            {
                cout<<"Ashishgup"<<"\n";
            }
            else if(cnt2>1)
            {
                cout<<"Ashishgup"<<"\n";
            }
            else if(cnt2==1)
            {
                if(cnt1==1)
                    cout<<"FastestFinger"<<"\n";
                else
                    cout<<"Ashishgup"<<"\n";
            }
            else if(cnt2==0)
            {
                if(cnt1==1)
                    cout<<"Ashishgup"<<"\n";
                else
                    cout<<"FastestFinger"<<"\n";
            }
            else cout<<"FastestFinger"<<"\n";
        }
    }
}
