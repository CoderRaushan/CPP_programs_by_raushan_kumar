#include<bits/stdc++.h>
using namespace std;
void change(vector<int>&a)//vector by default copy send karta hai isliye & use kro
{
a[0]=44;
for (int i = 0; i < a.size(); i++)
{
  cout<<a[i]<<" ";
}
cout<<endl;
}
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
  cout<<v[i]<<" ";
}
cout<<endl;

change(v);
for (int i = 0; i < v.size(); i++)
{
  cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}