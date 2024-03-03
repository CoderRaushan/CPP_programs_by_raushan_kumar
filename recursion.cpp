#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
if(n==0)
{
    return 1 ;
}
return n*fun(n-1);
}
int main()
{
int n=6;
cout<<fun(n)<<" ";
return 0;
}