#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
v.push_back(1); 
v.push_back(5);
v.push_back(287);
v.push_back(3);
v.push_back(76);
for (int i = 0; i < v.size(); i++)
{
   cout<<v.at(i)<<" ";
}
cout<<endl;
sort(v.begin(),v.end());//sorting in accending order 

for (int i = 0; i < v.size(); i++)
{
   cout<<v[i]<<" ";
}
return 0;
}