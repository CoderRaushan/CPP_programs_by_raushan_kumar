#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[100],n,x,count=0;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for (int i = 0; i <n; i++)
{
   cin>>arr[i];
}
cout<<"enter your target element"<<endl;
cin>>x;
for (int i = 0; i < n; i++)
{
  if(arr[i] > x)
  {
   count++;
  }
}
cout<<count;
return 0;
}