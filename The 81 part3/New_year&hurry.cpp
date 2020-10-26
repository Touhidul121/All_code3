#include<bits/stdc++.h>
using namespace std;

int main()
{
    int np,t,j,k=5;
    cin>>np>>t;

    int time_left,t_req=5;
    time_left=240-t;
    j=0;
int i=1;
    while(time_left>=t_req)
     {
         time_left-=5*i;

         i++;
         t_req=5*i;
        j++;
     }


    cout<<min(np,j)<<endl;
}
