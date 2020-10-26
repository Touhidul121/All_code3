#include<bits/stdc++.h>
using namespace std;
#define N 101

int n;
bool isSafe(int board[N][N],int row,int col)
{
    for(int i=0;i<col;i++)
        if(board[row][i]==1)return false;

    for(int i=row,j=col;i>=0 && j>=0 ;i--,j--)
        if(board[i][j]==1)return false;

    for(int i=row,j=col;i<n && j>=0 ;i++,j--)
        if(board[i][j]==1)return false;

    return true;
}
bool solve(int board[N][N],int col)
{
    if(col>=n)
        return true;

    for(int i=0;i<n;i++)
    {
        if(isSafe(board,i,col))
        {
            board[i][col]=1;
            if( solve(board,col+1))
            return true;
           board[i][col]=0;//backtrack
        }
    }
    return false;
}
int main()
{
    cin>>n;
    int board[N][N];
    memset(board,0,sizeof(board));
    bool res=solve(board,0);
    if(res==false)
        cout<<"NOT POSSIBLE"<<"\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

}
