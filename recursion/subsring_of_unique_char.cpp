#include<bits/stdc++.h>
using namespace std;
void substing(string ans,string original,vector<string>&v)
{
   if(original=="")
   {
    v.push_back(ans);
    return;
   }
   char ch=original[0];
   substing(ans,original.substr(1),v);
   substing(ans+ch,original.substr(1),v); 
  
}
int main()
{
    vector<string>v;
 string original="abc";
 string str1="";
 substing(str1,original,v);
 for(string ele:v)
 {
    cout<<ele<<endl;
 }
return 0;
}