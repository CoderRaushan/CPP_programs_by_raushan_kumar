#include<iostream>
using namespace std;
int main()
{
    int n,d,reverse=0,c;
 cout<<"enter a number:"<<endl;
 cin>>n;
c=n;
while (n!=0)
{
   d=n%10; 
   reverse=reverse*10+d;
   n=n/10; 
}
if (c==reverse)
{
  cout<<"palindrom number:";
}
else 
{
    cout<<"not palindrom ";
}
return 0;
}