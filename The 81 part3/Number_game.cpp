#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt2=0,cnt_odd=0;
        if(n==1)
        {
            cout<<"FastestFinger"<<"\n";
        }
        else if(n==2)
            cout<<"Ashishgup"<<"\n";
        else if(n&1)
        {
            cout<<"Ashishgup"<<"\n";
        }

        else{
                if(n%2==0)
                {
                    while(n%2==0)
                    {
                        cnt2++;
                        n/=2;
                    }
                }
           for(int i=3;i<=sqrt(n);i++)
        {

        while(n%i==0)
        {
            cnt_odd++;
            n/=i;
        }

        }
      if(n>2)
        cnt_odd++;
        //cout<<cnt2<<" "<<cnt_odd<<"\n";
        if(cnt2>1)
        {
           if(cnt_odd>0)
                cout<<"Ashishgup"<<"\n";
           else
            cout<<"FastestFinger"<<"\n";
        }

        else{
            if(cnt_odd>1)
            {
                cout<<"Ashishgup"<<"\n";
            }
            else
                cout<<"FastestFinger"<<"\n";
        }
    }
    }
}
