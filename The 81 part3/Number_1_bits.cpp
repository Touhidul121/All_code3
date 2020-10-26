#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bitset<1000>b(s);
    cout<<b.count()<<"\n";
    return 0;
}
