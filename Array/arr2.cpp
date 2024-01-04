#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[]={1,2,3,4,5,6,7};
 int * ptr=arr;//we gave address of first element
 for (int i = 0; i <7; i++)
 {
    cout<<*ptr<<" ";
    ptr++;
 }
 
return 0;
}