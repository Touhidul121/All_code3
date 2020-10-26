#include<bits/stdc++.h>
using namespace std;
#define maxN (int) 1e5+1
int primes[maxN];
vector<int>v;
void sieve(int n)
{
    for(int i=1;i<=n;i++)
        primes[i]=1;
    primes[0]=primes[1]=0;

    for(int i=2;i*i<=n;i++)
    {
        if(primes[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=0;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(primes[i]==1)
            v.push_back(i);
    }
}

bool isPrime(int n)
{
    if(n==1)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    //sieve(100000);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int corner=0;

        for(int i=1;i<=2000;i++)
        {
            if(isPrime(i+(n-1)) && !isPrime(i))
               {
                   corner=i;break;
               }

        }

        vector<vector<int>>ans(n,vector<int>(n,1));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    ans[i][j]=corner;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
