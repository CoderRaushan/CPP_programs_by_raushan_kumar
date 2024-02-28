#include<bits/stdc++.h>
using namespace std;
void solve(int n,int *arr) 
{
if(n<0)return ;
// cout<<arr[n]<<" "; for decending order
solve(n-1,arr);
cout<<arr[n]<<" "; //for acedeing order
}
int main()
{
int arr[6]={1,2,3,4,5,6};
solve(5,arr);
return 0;
}