#include<stdio.h>


int main()
{
    int n,x,rev=0;
    scanf("%d",&n);
    x=n;

    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(x==rev)
     printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
