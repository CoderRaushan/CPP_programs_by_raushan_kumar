#include<bits/stdc++.h>
using namespace std;
int main()
{
 int max=INT_MIN,arr[100],n,i;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for ( i = 1; i <=n; i++)
{
   cin>>arr[i];
}
cout<<"greater element in an array::"<<endl;
max=arr[1];
for ( i = 2; i <=n; i++)//{76,66,39,89,99,42}
{
   
    if(max < arr[i])
    {
      max=arr[i];
    }
} 
cout<<max<<endl; 
return 0;
}