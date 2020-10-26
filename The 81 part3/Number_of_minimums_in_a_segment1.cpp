#include<bits/stdc++.h>
const int maxN = 1e5+1;

using namespace std;
int ar[maxN];
pair<int,int>st[4*maxN];

pair<int,int> combine(pair<int,int> a,pair<int,int> b)
{
    if(a.first<b.first)
        return a;
    if(b.first<a.first)
        return b;
    return {a.first,(a.second+b.second)};
}
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]={ar[ss],1};
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=combine(st[2*si],st[2*si+1]);
}
void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se)
    {
        st[si]={val,1};
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=combine(st[2*si],st[2*si+1]);
}
pair<int,int> query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return {INT_MAX,0};
    if(ss==qs &&se==qe)
        return st[si];
    int mid=(ss+se)/2;

    return combine(query(2*si,ss,mid,qs,min(mid,qe)),query(2*si+1,mid+1,se,max(qs,mid+1),qe));

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int n,m,type,l,r;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    buildtree(1,1,n);
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            update(1,1,n,l+1,r);
        }
        else
        {
            pair<int,int> x=query(1,1,n,l+1,r);
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
}
