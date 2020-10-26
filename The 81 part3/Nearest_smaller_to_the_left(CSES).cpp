#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    stack<int>stk;
    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        if(stk.size()==0)
            ans.push_back(0);
        else if(arr[stk.top()]<arr[i])
            ans.push_back(stk.top()+1);
        else
        {
            while(stk.size()>0 && arr[stk.top()]>=arr[i])
            {
                stk.pop();
            }
            if(stk.size()==0)ans.push_back(0);
            else ans.push_back(stk.top()+1);
        }
        stk.push(i);
    }
    for(int x:ans)
        cout<<x<<" ";
    cout<<"\n";
}
