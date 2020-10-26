#include<bits/stdc++.h>
using namespace std;

int main()
{
        string s;
        cin>>s;
        vector<string>v;
        map<char,string>mp;
        mp['2']="abc";mp['3']="def";mp['4']="ghi";mp['5']="jkl";mp['6']="mno";mp['7']="pqrs";mp['8']="tuv";mp['9']="wxyz";

        if(s.size()==1)
        {
           string x=mp[s[0]];
            for(char c:x)
            {
                v.push_back(string(1,c));
            }

        }
       else if(s.size()==2)
        {
            string a=mp[s[0]],b=mp[s[1]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    string x="";
                    x+=a[i];
                    x+=b[j];
                    v.push_back(x);
                }
            }
        }
        else if(s.size()==3)
        {
             string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++){
                    string x="";
                    x+=a[i];
                    x+=b[j];x+=c[k];
                    v.push_back(x);
                    }
                }
            }
        }

         else if(s.size()==4)
        {
             string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]],d=mp[s[3]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++)
                    {
                        for(int l=0;l<d.size();l++)
                        {
                         string x="";
                          x+=a[i];
                          x+=b[j];x+=c[k];x+=d[l];
                          v.push_back(x);
                        }
                    }
                }
            }
        }
         else if(s.size()==5)
        {
             string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]],d=mp[s[3]],e=mp[s[4]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++)
                    {
                        for(int l=0;l<d.size();l++)
                        {
                            for(int m=0;m<e.size();m++)
                            {
                             string x="";
                              x+=a[i];
                              x+=b[j];x+=c[k];x+=d[l];x+=e[m];
                              v.push_back(x);
                            }
                        }
                    }
                }
            }
        }

        else if(s.size()==6)
        {
            string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]],d=mp[s[3]],e=mp[s[4]],f=mp[s[5]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++)
                    {
                        for(int l=0;l<d.size();l++)
                        {
                            for(int m=0;m<e.size();m++)
                            {
                                for(int n=0;n<f.size();n++){
                             string x="";
                              x+=a[i];
                              x+=b[j];x+=c[k];x+=d[l];x+=e[m];x+=f[n];
                              v.push_back(x);
                                }
                            }
                        }
                    }
                }
            }
        }

        else if(s.size()==7)
        {
            string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]],d=mp[s[3]],e=mp[s[4]],f=mp[s[5]],g=mp[s[6]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++)
                    {
                        for(int l=0;l<d.size();l++)
                        {
                            for(int m=0;m<e.size();m++)
                            {
                                for(int n=0;n<f.size();n++){
                                    for(int o=0;o<g.size();o++){
                             string x="";
                              x+=a[i];
                              x+=b[j];x+=c[k];x+=d[l];x+=e[m];x+=f[n];x+=g[o];
                              v.push_back(x);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        else if(s.size()==8)
        {
       string a=mp[s[0]],b=mp[s[1]],c=mp[s[2]],d=mp[s[3]],e=mp[s[4]],f=mp[s[5]],g=mp[s[6]],h=mp[s[7]];

            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    for(int k=0;k<c.size();k++)
                    {
                        for(int l=0;l<d.size();l++)
                        {
                            for(int m=0;m<e.size();m++)
                            {
                                for(int n=0;n<f.size();n++){
                                    for(int o=0;o<g.size();o++){
                                        for(int p=0;p<h.size();p++){
                             string x="";
                              x+=a[i];
                              x+=b[j];x+=c[k];x+=d[l];x+=e[m];x+=f[n];x+=g[o];x+=h[p];
                              v.push_back(x);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }



       for(string s:v)
        cout<<s<<" ";

    }
