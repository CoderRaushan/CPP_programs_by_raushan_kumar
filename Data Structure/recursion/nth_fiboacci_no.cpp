#include<bits/stdc++.h>
using namespace std;
 int nthfibo(int n)
 {
    if(n==1 || n==2) return 1;
   return nthfibo(n-1)+nthfibo(n-2);
 }
int main()
{
 cout<<nthfibo(6);
return 0;
}