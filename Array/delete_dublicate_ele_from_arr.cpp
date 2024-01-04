#include<bits/stdc++.h>
using namespace std;
int deletedublicate(int arr[],int size)
{
int dd=0;
for (int i = 1; i <size ; i++)
{
   if(arr[dd]!=arr[i])
   {
    dd++;
    arr[dd]=arr[i];
   }
}
return dd+1;
}
int main()
{
    
 int arr[]={1,2,3,3,4,6,6};
int n=deletedublicate(arr,7);
for (int i = 0; i < n; i++)
{
cout<<arr[i]<<" ";
}


return 0;
}