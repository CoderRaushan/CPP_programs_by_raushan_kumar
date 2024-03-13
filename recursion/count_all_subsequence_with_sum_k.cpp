#include<bits/stdc++.h>
using namespace std;
 int subsequencewithsumk( int arr[],int idx,int n,int sum,int k)
 {
  if(idx==n)
  {
        if(sum==k)
        {
            return 1;
        }
        else return 0;
  }
  sum=sum+arr[idx];
int left=subsequencewithsumk(arr,idx+1,n,sum,k);
sum=sum-arr[idx];
int right=subsequencewithsumk(arr,idx+1,n,sum,k);
return left + right;
 }
int main()
{
 int arr[]={9,5, 6 ,5, 5 };
 int k=16;
int n=sizeof(arr)/sizeof(arr[0]);
 int sum=0;
 cout<<subsequencewithsumk(arr,0,n,sum,k);
 return 0;
}
