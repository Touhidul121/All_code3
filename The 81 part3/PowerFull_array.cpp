#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BLOCK 555
ll ar[200001];
ll ans[200001];
map<ll,ll>mp;
ll power=0;
struct Q
{
    int l;
    int r;
    int i;
};
struct Q query[200001];
bool comp(Q a,Q b)
{
    if(a.l/BLOCK!=b.l/BLOCK)
        return a.l/BLOCK<b.l/BLOCK;
    else
        return a.r<b.r;
}

void add(int pos)
{
    ll curF=mp[ar[pos]];
    power-=curF*curF*ar[pos];
    mp[ar[pos]]++;
    ll newF=mp[ar[pos]];
    power+=newF*newF*ar[pos];

}

void remove(int pos)
{
    ll curF=mp[ar[pos]];
    power-=curF*curF*ar[pos];
    mp[ar[pos]]--;
    ll newF=mp[ar[pos]];
    power+=newF*newF*ar[pos];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>ar[i];

    for(int i=0;i<q;i++)
    {
        cin>>query[i].l>>query[i].r;
        query[i].i=i;query[i].l--;query[i].r--;
    }
    sort(qur,Q+q,comp);

    int ML=0,MR=-1;
    for(int i=0;i<q;i++)
    {
        int L=query[i].l;
        int R=query[i].r;
        int idx=query[i].i;

        while(L<ML)
        ML--,add(ML);

        while(R>MR)
            MR++, add(MR);

        while(L>ML)
            remove(ML),ML++;

        while(MR>R)
            remove(MR),MR--;

        ans[idx]=power;

    }

    for(int i=0;i<q;i++)
        cout<<ar[i]<<" ";

}
