#include<bits/stdc++.h>
using namespace std;
int main()
{
 int max=INT_MIN,arr[100],n,i;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for ( i = 0; i <n; i++)
{
   cin>>arr[i];
}
for ( i = 0; i <n; i++)//{76,66,39,89,99,42}
{
    if(max < arr[i])
    {
      max=arr[i];
    }
} 
cout<<"greatest element in an array:"<<max<<endl;
int smax=INT_MIN;
for (int  i = 0; i < n; i++)
{
   if(smax < arr[i] && arr[i]!=max )
   {
    smax=arr[i];
   }
}
cout<<"second greatest element in array:"<<smax<<endl;
return 0;
}