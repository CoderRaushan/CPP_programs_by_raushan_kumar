#include<iostream>
using namespace std;
void deciTobinary(int n)
{
int arr[100],i=0;
while (n!=0)
{
  arr[i]=n%2;//10%2==1
  n=n/2;//10/2==2
  i++;
}
for (int  j = i-1;  j>=0; j--)
{
  cout<<arr[j];
}
}
int main()
{
  int n;
 cout<<"enter a number:";
cin>>n;
deciTobinary(n);
return 0;
}