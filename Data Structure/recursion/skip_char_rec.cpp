#include<bits/stdc++.h>
using namespace std;
void skip(string str,string str1,int idx)
{
if(idx==str.length())
{
    cout<<str1;
    return ;
}
if(str[idx]!='a')
{
   str1=str1+str[idx];
}
skip(str,str1,idx+1);
}
int main()
{
 string str="raushan kumar";
 string str1="";
skip(str,str1,0);
return 0;
}