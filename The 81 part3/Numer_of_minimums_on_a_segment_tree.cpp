#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001

pair<int, int> st[4*MAXN];

pair<int, int> combine(pair<int, int> a, pair<int, int> b) {
    if (a.first <b.first)
        return a;
    if (b.first < a.first)
        return b;
    return make_pair(a.first, a.second + b.second);
}

void build(int a[], int si, int ss, int se) {
    if (ss == se) {
        st[si] = make_pair(a[ss], 1);
    } else {
        int mid= (ss + se) / 2;
        build(a, si*2, ss, mid);
        build(a, si*2+1, mid+1, se);
        st[si] = combine(st[si*2], st[si*2+1]);
    }
}

pair<int, int> get_max(int si, int ss, int se, int qs, int qe) {
    if (qs> qe)
        return make_pair(INT_MAX, 0);
    if (qs == ss && qe == se)
        return st[si];
    int mid = (ss + se) / 2;
    return combine(get_max(si*2, ss, mid, qs, min(qe, mid)),
                   get_max(si*2+1, mid+1, qe, max(qs, mid+1), qe));
}

void update(int si, int ss, int se, int qi, int val) {
    if (ss == se) {
        st[si] = make_pair(val, 1);
        return;
    } else {
        int mid= (ss + se) / 2;
        if (qi <= mid)
            update(si*2, ss, mid, qi, val);
        else
            update(si*2+1,mid+1, se, qi, val);
        st[si] = combine(st[si*2], st[si*2+1]);
    }
}

int main()
{
    int n,q,t,l,r;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build(a,1,1,n);
    for(int i=1;i<=q;i++)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            update(1,1,n,l+1,r);
        }
        else
        {
            pair<int,int> m=get_max(1,1,n,l+1,r);
            cout<<m.first<<" "<<m.second<<"\n";
        }
    }
}


