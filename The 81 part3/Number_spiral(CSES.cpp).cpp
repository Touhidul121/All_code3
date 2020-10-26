#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll row,col,first_element;
    cin>>row>>col;

    if(row==col)
        cout<<(row*row)-(row-1)<<"\n";
        else if(row>col)
        {
            if(row%2==0)
            {
                first_element=(row*row);
                cout<<first_element-col+1<<"\n";
            }
            else
            {
                first_element=(row-1)*(row-1)+1;
                cout<<first_element+col-1<<"\n";
            }
        }
        else
        {
            if(col%2==0)
            {
                first_element=(col-1)*(col-1)+1;
                cout<<first_element+row-1<<"\n";
            }
            else
            {
                first_element=col*col;
                cout<<first_element-row+1<<"\n";
            }
        }
    }
}
