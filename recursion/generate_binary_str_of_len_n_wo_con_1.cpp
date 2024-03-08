#include<bits/stdc++.h>
using namespace std;
void binary(string str,int n)
{
if(str.length()==n)
{
 cout<<str<<endl;
 return;
}
binary(str+"0",n);
if(str=="" ||  str[str.length()-1]=='0') 
{
    binary(str+"1",n);
}
}
int main()
{
int n=3;
binary("",n);
return 0;
}