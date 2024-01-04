#include<bits/stdc++.h>
using namespace std;
void display(/*int arr[]*/ int *arr ,int n )
{
for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}

void change(int* b,int size)
{
b[0]=88;
}
int main()
{
 int arr[]={1,2,3,4,5,6};
 int size=6;
display(arr,size);
change(arr,size);
display(arr,size);
return 0;
}