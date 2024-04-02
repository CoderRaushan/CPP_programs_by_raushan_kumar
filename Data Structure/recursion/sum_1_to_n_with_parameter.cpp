#include<bits/stdc++.h>
using namespace std;
int sum(int i,int n)
{
  if(i>n)return 0;
  int ans=i+sum(i+1,n);
  return ans;
}
int main()
{
cout<<sum(0,4);
return 0;
}