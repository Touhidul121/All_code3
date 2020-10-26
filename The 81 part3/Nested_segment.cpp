#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 100001

int ar[maxN],st[4*maxN];
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=ar[ss];
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=st[2*si]+st[2*si+1];
}
ll query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return 0;
    if(qs==ss && qe==se)
        return st[si];
    int mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,min(qe,mid));
    ll r=query(2*si+1,mid+1,se,max(qs,mid+1),qe);
    return l+r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    cin>>n;
    int b[2*n+1];
    map<int,int>mp,loc;

    for(int i=1;i<=2*n;i++)
        cin>>b[i];
    array<int,3> v[2*n];
    int j=0;
    for(int i=2*n;i>=1;i--)
    {
        x=b[i];
        mp[x]++;
        if(mp[x]==1)
        {
            loc[x]=i;
            ar[i]=1;
        }
        if(mp[x]==2)
        {
            ar[i]=2;
            v[j][0]=x;
            v[j][1]=i;
            v[j][2]=loc[x];
            j++;

        }
    }
    buildtree(1,1,2*n);
     sort(v,v+j);

    for(int i=0;i<j;i++)
        cout<<query(1,1,2*n,v[i][1]+1,v[i][2])/3-1<<" ";
    cout<<"\n";

}
