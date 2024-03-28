#include<bits/stdc++.h>
using namespace std;
int main()
{

string s="1234";
int n=s.length();
int count=0;
for (int i = 0; i <s.length(); i++)
{
     if(s.length()==0 || s.length()==1) break;
      if(s.length()==2 && s[0]!=s[1])
    {
        count=1;
        break;
    }
    if(i==0)
    {
       if(s[i]!=s[i+1]) count++;
    }
    else if(i==n-1)
    {
       if(s[i]!=s[i-1]) count++;
    }
    else if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
}
cout<<count;
return 0;
}