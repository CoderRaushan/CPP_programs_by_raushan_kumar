// #include<iostream>
// using namespace std;
// int main()
// {
//  int i=1,sum=1,n;
//  cout<<"enter a no to be calculate factorial:";
//  cin>>n;
//  if(n<=0)
//  {
//     cout<<n;
//  }
//  else {
// //  while (i<=n)
// //  {
// //    sum=sum*i;
// //    i++;
// //  }
// for ( i = 1; i <=n; i++)
// {
//  sum=sum*i;
// }
//  cout<<sum;
//  }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
if(n<=0)
{
  return  1;
}
else
{
 return n*fac(n-1);
}
}
int main()
{
  int n;
 cout<<"enter a no to calculate factorial:"<<endl;
 cin>>n;
 cout<<"factorial is:"<<fac(n);
return 0;
}