#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int n,sum=0,d,s,a;
cout<<"enter a no:"<<endl;
cin>>n;
a=n;
s=trunc(log10(n))+1;//function to find length of integer.
while (n!=0)
{
    
    d=n%10;
    sum=sum+pow(d,s);//0+27+125+1
    n=n/10; 
}
if (a==sum)
{
    cout<<"armstrong no:"<<endl;
}
else
{
    cout<<"not a armstrong no:"<<endl;
}
return 0;
}