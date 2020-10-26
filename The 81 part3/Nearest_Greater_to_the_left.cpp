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
    vector<int>ans;
    stack<int>stk;
    for(int i=0;i<n;i++)
    {
        if(stk.size()==0)
            ans.push_back(-1);
        else if(stk.top()>arr[i]){
            ans.push_back(stk.top());
        }
        else
        {
            while(stk.size()>0 && stk.top()<=arr[i])
                stk.pop();
            if(stk.size()==0)ans.push_back(-1);
            else ans.push_back(stk.top());
        }
        stk.push(arr[i]);
    }


    for(int x:ans)cout<<x<<" ";
    cout<<"\n";
}

