#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 998244353
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<lli>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
            cin>>a , st.insert(a);
        if(st.size()==1)
            cout<<n<<"\n";
        else
            cout<<1<<"\n";
    }
}
