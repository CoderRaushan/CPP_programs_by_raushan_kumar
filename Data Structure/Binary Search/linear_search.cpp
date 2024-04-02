#include<bits/stdc++.h>
using namespace std;
void linearSearch(int n, int arr[],int target)
{
    int idx;
    bool flag=false;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]==target)
        {
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true) cout<<"ele present in the array:"<<idx+1<<endl;
    else cout<<"ele not present in the array:"<<endl;

}
int main()
{
 int arr[]={23,54,45,6,47,98,4,3,5667,87,89,8};
 int target=88;
 int n=sizeof(arr)/sizeof(arr[0]);
 linearSearch(n,arr,target);
return 0;
}