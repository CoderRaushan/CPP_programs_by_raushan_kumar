#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int s)
{
    int min,temp;
    for (int i = 0; i < s-1; i++)
    {
         min=i;
     for (int j = 1+i; j < s; j++)
     {
        if(arr[j]<arr[min])
        {
            min=j;
        }
     }
          if(min!=i)
          {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
          }
 
    }
    
}
int main()
{
    int arr[100],s;
 cout<<"Enter size of array:"<<endl;
 cin>>s;
 cout<<"Enter unsorted array elelments:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cin>>arr[i];
 }
 cout<<"Unsorted array elelments are:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cout<<arr[i]<<" ";
 }
 selectionSort(arr,s);
 cout<<endl<<"Sorted array elelments are:"<<endl;
 for (int i = 0; i < s; i++)
 {
   cout<<arr[i]<<" ";
 }
return 0;
}