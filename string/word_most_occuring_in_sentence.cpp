#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="raushan is as a good boy. He is  a good coder as well as a good engineer";
stringstream s(str);
string temp;
vector<string>v;
while (s>>temp)
{
  v.push_back(temp);
}
sort(v.begin(),v.end());
int count=1;
int maxcount=1;
for (int i = 1; i <v.size(); i++)
{
   if(v[i]==v[i-1]) count++;
   else count=1;
   maxcount=max(maxcount,count);
}
count=1;
for (int i = 1; i <v.size(); i++)
{
   if(v[i]==v[i-1]) count++;
   else count=1;
   if(count==maxcount)
   {
    cout<<v[i]<<":"<<maxcount<<endl;
   }
}


return 0;
}