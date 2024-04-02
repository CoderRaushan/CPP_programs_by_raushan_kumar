#include<bits/stdc++.h>
using namespace std;
int main()
{
 int min=INT_MAX, i,arr[100],n;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for ( i = 0; i <n; i++)
{
   cin>>arr[i];
}
cout<<"smallerst element in an array::"<<endl;
int temp;
min=arr[0];
for ( i = 1; i < n; i++)//{76,66,39,89,99,42}
{
    if(min > arr[i])//temps
    {
      min=arr[i];
    }
} 
cout<<min<<endl; 
return 0;
}