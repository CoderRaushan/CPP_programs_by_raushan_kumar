#include<iostream>
using namespace std;
int main()
{ int n;
  int arr[]={10,20,30,40,50};
  for(int x :arr)
  {
    cout<<x<<"\n";
  }
 n=sizeof(arr)/sizeof(arr[0]);
 cout<<"how much element present in the arrat:"<<n<<" \n";
  for ( int i = 0; i < n; i++)
  {
    cout<<arr[i]<<"\n";
  }
return 0;
}
