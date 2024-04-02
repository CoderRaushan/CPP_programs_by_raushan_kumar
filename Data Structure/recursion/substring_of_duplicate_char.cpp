#include<bits/stdc++.h>
using namespace std;
void substing(string ans,string original,vector<string>&v,bool flag)
{
   if(original=="")
   {
    v.push_back(ans);
    return;
   }
   char ch=original[0];
   if(original.length()==1)
   {
    if(flag==true)substing(ans,original.substr(1),v,true);
    substing(ans+ch,original.substr(1),v,true); 
    return;
   }
   char dh=original[1];
   if(ch==dh)
   {
     if(flag==true)substing(ans,original.substr(1),v,true);
     substing(ans+ch,original.substr(1),v,false); 
   }
   else
   {
    if(flag==true)substing(ans,original.substr(1),v,true);
    substing(ans+ch,original.substr(1),v,true); 
   }
   
}
int main()
{
 vector<string>v;
 string original="aab";
 string str1="";
 substing(str1,original,v,true);
 for(string ele:v)
 {
   cout<<ele<<endl;
 }
return 0;
}