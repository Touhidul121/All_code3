#include<stdio.h>


int main()
{
    int n=7;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
          printf(" ");
        if(i==1)
            printf("%d ",1);
        else
        {
            printf("%d ",1);
            for(int k=1;k<=i-2;k++)
                printf("%d ",2*k+1);
            printf("%d ",1);
        }
      printf("\n");
    }
}
