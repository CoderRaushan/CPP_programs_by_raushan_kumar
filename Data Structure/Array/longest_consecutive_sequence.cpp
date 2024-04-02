#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int>&a) 
{
    int n=a.size();
    if(n==0)
    {
        return 0;
    }
    sort(a.begin(),a.end());
    int smallele=INT_MIN;
    int count=0;
    int largest=1;
   for(int i=0;i<n;i++)
   {
       if(a[i]-1==smallele)
       {
        count++;
        smallele=a[i];
       }
       else if(a[i]-1!=smallele)
       {
           count=1;
           smallele=a[i];
       }
       largest=max(largest,count);
   }
   return largest;
} 
int main() 
{
    vector<int> nums = {100, 4, 200, 1, 3, 2, 2, 5, 7, 6};

    int result = longestSuccessiveElements(nums);

    cout << "The length of the longest consecutive sequence is: " << result << endl;

    return 0;
}