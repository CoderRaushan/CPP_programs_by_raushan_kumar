#include<iostream>
using namespace std;
int main()
{
 int n,d,reverse=0;
 cout<<"enter a number:"<<endl;
 cin>>n;//6783465
while (n!=0)
{
   d=n%10; //57528
   reverse=reverse*10+d;//8//80+2=82
   n=n/10; 
}
 cout<<reverse;
return 0;
}
