#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    vector<vector<int>>lava;
    int n,q;
    cin>>n>>q;
    lava.resize(2,vector<int>(n,0));

    int blocked_pair=0;

    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;

        int delta=(lava[x][y]==0)?+1:-1;

        lava[x][y]=1-lava[x][y]; // toggle the current cell

        for(int dy=-1;dy<=1;dy++) // for checking adjacent three cells
        {
         if(y+dy<0 || y+dy>=n)  continue;

         if(lava[1-x][y+dy]==1)blocked_pair+=delta;
        }
        if(blocked_pair==0)cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";

    }


}
