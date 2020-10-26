#include<bits/stdc++.h>
using namespace std;
#define inf 1 << 28
int mat[][10] = {
    { 5,1,2,6 },
    { 9,9,7,5},
    {3,1,4,8}
};
int dp[10][10];
int r = 3, c = 4;
int call(int i, int j)
{
    if (i >= 0 && i < r and j >= 0 and j < c) //if still inside the array
    {
        if(i==r-1 || c==c-1)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ret = inf;
        //try to move to 3 direction,also add current cell's point
        ret = min(ret, call(i, j+1) + mat[i][j]);
        ret = min(ret, call(i + 1,j) + mat[i][j]);
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    // READ("in");
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        dp[i][j]=-1;
    printf("%d\n", call(0, 0));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
