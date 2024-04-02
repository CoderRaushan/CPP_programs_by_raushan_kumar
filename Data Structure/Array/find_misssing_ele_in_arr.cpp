#include<bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums) 
    {
       int missing = nums.size(); 
        for (int i = 0; i < nums.size(); i++) 
        {
            missing = missing ^ i ^ nums[i];//5^4^5=4
        }
        return missing;
    }
int main()
{
 vector<int>v;
 v.push_back(0);
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(5);
 for (int i = 0; i < v.size(); i++)
 {
    cout<<v[i]<<" ";
 }
 cout<<endl;
cout<<missingNumber(v);
return 0;
}