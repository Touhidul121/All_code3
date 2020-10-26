#include<bits/stdc++.h>

#define BLOCK 555

typedef long long ll;
using namespace std;
struct query{
	ll l;
	ll r;
	ll i;
};
query Q[200001];
ll ar[200001] ;
ll ans[200001];
ll freq[1000001];
long long power= 0;

bool comp(query a , query b)
{
	if(a.l / BLOCK != b.l/BLOCK)
	return a.l/BLOCK < b.l/BLOCK;

	return a.r/BLOCK < b.r/BLOCK;
}

void add(ll pos)
{
    ll ele=ar[pos];
    ll cur=freq[ele];
	freq[ele]++;
	ll curF=freq[ele];
	power-=(cur*cur*ele);
	power+=(curF*curF*ele);
}

void remove(ll pos)
{
	 ll ele=ar[pos];
    ll cur=freq[ele];
	freq[ele]--;
	ll curF=freq[ele];
	power-=(cur*cur*ele);
	power+=(curF*curF*ele);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	ll n , q;
	cin>>n>>q;
	for(ll i=0;i<n;i++)
	cin>>ar[i];

	for(ll i=0;i<q;i++){
		cin>>Q[i].l>>Q[i].r;
		Q[i].i = i , Q[i].l-- , Q[i].r--;
	}

	sort(Q , Q+q , comp);

	//why ML = 0 , and MR = -1?
	ll ML = 0 , MR = -1;
	for(int i=0;i<q;i++)
	{
		ll L = Q[i].l;
		ll R = Q[i].r;

		while(ML > L)
		ML-- , add(ML);

		while(MR < R)
		MR++ , add(MR);

		while(ML < L)
		remove(ML) , ML++;

		while(MR > R)
		remove(MR) , MR--;

		ans[Q[i].i] = power;
	}

	for(ll i=0;i<q;i++)
	cout<<ans[i]<<'\n';
}

