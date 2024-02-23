#include<bits/stdc++.h>
using namespace std;
int pow(int i,int n)
{
if(n==0) return 1;
int ans=i*pow(i,n-1);
return ans;
}
int main()
{
 cout<<pow(2,8);
return 0;
}