#include<bits/stdc++.h>
using namespace std;
void substing(string ans,string original,vector<string>&v,int idx,int n)
{
   if(idx==n)
   {
    v.push_back(ans);
    return;
   }
   char ch=original[0];
   substing(ans,original.substr(1),v,idx+1,n);
   substing(ans+ch,original.substr(1),v,idx+1,n); 
}
int main()
{
    vector<string>v;
 string original="abc";
 int n=original.length();
 string str1="";
 substing(str1,original,v,0,n);
 for(string ele:v)
 {
    cout<<ele<<endl;
 }
return 0;
}