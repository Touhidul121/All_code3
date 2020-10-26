/* if the array is left rotated(left to right)(antic then no_of_rotations=(length-index_of_min_element)%length

if the array is right rotated(right to left ) then no_of_rotations=ndex_of_min_element

code to find number of rotations if the sorted array is rotated to the right(right to left)
-----------------------------------------------------------------------------*/

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

    if(arr[0]<arr[n-1])cout<<0<<"\n";
    else
    {
        int res=-1;
        int l=0,h=n-1;

        while(l<=h)
        {
            if(arr[l]<=arr[h])
            {
                cout<<l<<"\n";return 0;
            }

            int mid=(l+(h-l))/2;
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;

            if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
            {
                res=mid;break; // break is a must here
            }

            if(arr[l]<=arr[mid])
                l=mid+1;
            else if(arr[mid]<=arr[h])
                h=mid-1;
        }
        cout<<res<<"\n";
    }
}
