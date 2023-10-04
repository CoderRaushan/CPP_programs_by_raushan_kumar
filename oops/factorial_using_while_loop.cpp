#include<iostream>
using namespace std;
int main()
{
 int i=1,sum=1,n;
 cout<<"enter a no to be calculate factorial:";
 cin>>n;
 if(n<=0)
 {
    cout<<n;
 }
 else {
 while (i<=n)
 {
   sum=sum*i;
   i++;
 }
 cout<<sum;
 }
return 0;
}
