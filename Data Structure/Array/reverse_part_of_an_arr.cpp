#include<bits/stdc++.h>
using namespace std;
void display( vector<int> &v)
{
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
void reversepart(int i,int j,vector<int>&v)
{
while (i<=j)
{
  int temp=v[i];
  v[i]=v[j];
  v[j]=temp;
  i++;
  j--;
}
}
int main()
{
 vector<int>v1;
v1.push_back(1); 
v1.push_back(5);
v1.push_back(2);
v1.push_back(5);
v1.push_back(76);
display(v1);
reversepart(0,3,v1);
display(v1);
return 0;
}