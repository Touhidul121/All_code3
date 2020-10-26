 #include<bits/stdc++.h>
using namespace std;
void printAllSubstrings(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        string x="";
        for (int j = i; j < n; j++)
        {
            x+= s[j];
            cout<<x<<"\n";
        }
    }
}

int main()
{
    string s;
    cin>>s;
    printAllSubstrings(s, s.length());
    return 0;
}
