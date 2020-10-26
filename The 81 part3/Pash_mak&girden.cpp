#include<bits/stdc++.h>

using namespace std;



int main()
{
    int x1,y1,x2,y2,a;

    cin>>x1>>y1>>x2>>y2;

    if(y1==y2)
    {
      a=abs(x2-x1);
        cout<<x1<<" "<<y1+a<<" "<<x2<<" "<<y1+a<<"\n";
    }
    else if(x1==x2)
    {
        a=abs(y2-y1);
        cout<<x1+a<<" "<<y1<<" "<<x1+a<<" "<<y2<<"\n";
    }
    else{
            if(abs(x2-x1)!=abs(y2-y1))
            cout<<-1<<"\n";
    else{

        a=abs(x2-x1);

        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
    }
    }
}
