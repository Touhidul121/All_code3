#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define RFOR(start, end) for(int k=start-1; k>=end; k--)
#define FOR(start, end)  for(int i=start; i<end; i++)
#define FORR(start, end) for(int j=start; j<end; j++)
#define For(i,a,n)      for(int i=(a); i<=(n); i++)
#define Ms(ara, val) memset(ara, val, sizeof(ara))
#define rFor(i,n,a) for(int i=n; i>=a; i--)


#define trav(a,x) for (auto &a : x)
#define gap " "
#define all(V) V.begin(), V.end()
#define rall(V) V.rbegin(), V.rend()
#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define add insert
#define Ceil(a,b) ((a/b)+((a%b)!=0))
#define Sq(a) ((a)*(a))
#define P(x) cout<<"Check X: "<<x;
#define P2(x,y) cout<<"Check X,Y: "<<x<<" "<<y;
#define P3(x,y,z) cout<<"Check X,Y,Z: "<<x<<" "<<y<<" "<<z;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long , long long>
#define pdd pair<double, double>
#define pcc pair<char, char>
#define pld pair<long double,long double>


#define vi vector<int>
#define viit vector<int>:: iterator
#define vll vector<long long int>
#define vllit vector<long long>:: iterator
#define vd vector<double>
#define vld vector<long double>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define si set<int>
#define siit set<int>:: iterator
#define sll set<ll>
#define sllit set<ll>:: iterator
#define qi queue<int>
#define qll queue<ll>
#define qs queue<string>
#define pqi priority_queue<int>
#define pqll priority_queue<ll>
#define pqigreater priority_queue<int, vector<int>, greater<int> >
#define pqllgreater priority_queue<ll, vector<ll>, greater<ll> >
#define rep(a) sort(a.begin(), a.end())
#define rrep(a) sort(a.rbegin(), a.rend())
#define MAX INT_MAX
#define LMAX LLONG_MAX
#define MIN INT_MIN
#define LMIN LLONG_MIN
#define pi  (2*acos(0))
#define Mod 1000000007
#define nl "\n"
long long __lcm(long long a, long long b) {
return (a*b)/__gcd(a,b);}
template<typename T>
T nCr(T n, T r){
    if(r>n-r) r=n-r;
    long long  ans=1, i;
    for(i=1; i<=r; i++){
        ans*=n-r+i;
        ans/=i;
    }
	return ans;
}
bool isprime(ll n)
{
    if(n<3) return true;
    else if(n%2==0) return false;
    else{for(int i=3; i*i<=n; i+=2) if(n%i==0) return false;}
    return true;
}
ll ITD(string s)
{
	ll res=0, i, l, x, xx=1;
	l=s.size();
	l--;
	for(i=l; i>=0; i--)
	{
		x=(int) s[i]-'0';
		res+=(x*xx);
		xx*=10;
	}
	return res;
}
ll sq(ll x){return 1ll*x*x;}
struct item{
	ll x, y;
};
int main(int argc, char *argv[])
{
	fastIO;
	ll t=1;
	cin>>t;
while(t--)
	{
		ll i, ans=0, r, x, n, j, n1=0, n2=0;
		string s;
		cin>>s>>r;
		n1=ITD(s);
		s="0"+s;
		n=s.size();
		vll v(n, 0);
	//	cout<<"n1: "<<n1<<nl;
		for(i=1; i<n; i++)
		{
			x=(int) s[i]-'0';
			v[i]=v[i-1]+x;
		}
	//	for(i=0; i<n; i++) cout<<v[i]<<gap;
		for(i=n-1; i>0; i--)
		{
			if(v[i]>r)
			{
				s[i]='0';
				if(s[i]<'9')
				{
					s[i-1]++;
					v[i-1]+=1;
				}
				else
				{
					for(j=i-1; j>=0; j--)
					{
						if(s[j]<'9')
						{
							s[j]++;
							v[j]++;
							break;
						}
						else
						{
							s[j]='0';
						}
					}
				}
			}
			else
			{
				break;
			}
		}
		n2=ITD(s);
		cout<<(ll)(n2-n1)<<nl;
	}
	return 0;
}
