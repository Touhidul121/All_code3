#include<bits/stdc++.h>
using namespace std;
//----------merge sort------
void Merge(vector<string> &A,int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 vector<string> B(100);
 while(i<=mid && j<=h)
 {
 if(A[i].size()<A[j].size())
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];
 for(i=l;i<=h;i++)
 A[i]=B[i];
}
void MergeSort(vector<string>&A,int n)
{
 int p,l,h,mid,i;
 for(p=2;p<=n;p=p*2)
 {
 for(i=0;i+p-1<n;i=i+p)
 {
 l=i;
 h=i+p-1;
 mid=(l+h)/2;
 Merge(A,l,mid,h);
 }
 if(n-i>p/2)
 {
 l = i;
 h = i+p-1;
 mid = (l+h)/2;
 Merge(A, l, mid, n-1);
 }
 }
 if(p/2<n)
 {
 Merge(A,0,p/2-1,n-1);
 }
}
//-------merge sort----
int main()
{
    int n,k;
    cin>>n>>k;
    string r,a;
    vector<string>A;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        A.push_back(a);
    }
    MergeSort(A,n);
    cin>>r;
    int count=0,ans1=0,ans2=0;
    bool flag1=false,flag2=false;
    int i=0,cnt1=0;
    while(A[i].size()<r.size()&&i<n)
    {
        cnt1++;
        i++;
    }
    cout<<cnt1+(cnt1/k)*5+1<<" ";
    int cnt2=0;
    int j=0;
    while(A[j].size()<=r.size()&&j<n)
    {
        cnt2++;
        j++;
    }
//cout<<cnt2<<"\n";
    cout<<cnt2+((cnt2-1)/k)*5<<"\n";
}
