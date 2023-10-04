#include<iostream>
using namespace std;
int main()
{ int n;
cout<<"Enter array element number:";
cin>>n;
int arr[n];
cout<<"Enter array elements:";
for ( int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 1 ; i <=n; i++)
{
    if (arr[i]<arr[i-1])
    {
        cout<<"not shorted:"<<"\n";
    }
    else{
        cout<<"shorted"<<"\n";
    }

}
cout<<"your element is:"<<"\n";
for (int  i = 0; i < n; i++)
{
 cout<<arr[i]<<"\n";
}

 
return 0;
}