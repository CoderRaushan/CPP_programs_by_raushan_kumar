#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[32]={0},n;
    cin >> n;
    int i=0;
    while (n != 0)
    {
       arr[i]=n%2;
         n=n/2;
         i++;
      
    }
    for (int j=31; j>=0; j--)
    {
        cout<<arr[j];
    }
    
    return 0;
}