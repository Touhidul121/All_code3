#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
  int sum1=0;
  while(n>0)
  {
      sum1+=n%10;
      n/=10;
  }
  return sum1;
}
int main()
{
    int a;
    cin>>a;
    for(int i=a;;i++)
    {
        if(sum(i)%4==0)
        {
          cout<<i<<"\n";
          break;
        }
    }

}
