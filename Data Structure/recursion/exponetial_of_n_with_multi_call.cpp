#include<bits/stdc++.h>
using namespace std;
int pow(int i,int n)
{
if(n==1) return i ;
int ans=pow(i,n/2);
if(n%2==0) return ans*ans;
else return i*ans*ans; 
}
int main()
{
cout<<pow(2,0);
return 0;
}//space complexity o(logn)
//time complexity o(logn)