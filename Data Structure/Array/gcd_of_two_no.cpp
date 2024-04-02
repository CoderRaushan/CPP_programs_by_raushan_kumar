#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=96,b=14;
    int gcd=1;
 for (int i = 1; i <=min(a,b); i++)
 {
   if(a%i==0 && b%i==0)
   {
    gcd=i;
   }
 }
 cout<<"ans "<<gcd;
return 0;
}