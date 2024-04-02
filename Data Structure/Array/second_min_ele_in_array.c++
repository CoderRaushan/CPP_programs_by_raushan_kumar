#include<bits/stdc++.h>
using namespace std;
int main()
{
 int min=INT_MAX,arr[100],n;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for (int i = 0; i <n; i++)
{
   cin>>arr[i];
}
for (int i = 0; i <n; i++)//{76,66,39,89,99,42}
{
    if(min > arr[i])
    {
      min=arr[i];
    }
} 

int smin=INT_MAX;
for (int  i = 0; i < n; i++)
{
   if(smin > arr[i] && arr[i]!= min)
   {
    smin=arr[i];
   }
}
cout<<"smallest element in an array:"<<min<<endl;
cout<<"second smallest element in array:"<<smin<<endl;
return 0;
}