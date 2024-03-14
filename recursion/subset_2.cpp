#include <bits/stdc++.h>
using namespace std;
void substing(int arr[], vector<int> &ans, int idx, int n,bool flag)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout<<endl;
        return;
    }
    else
    {
       substing(arr, ans, idx + 1, n,false);
       if(idx>0 && arr[idx]==arr[idx-1] && (!flag))
       return ;
    ans.push_back(arr[idx]);
    substing(arr, ans, idx + 1, n,true);
    ans.pop_back();
    }
}
int main()
{
    vector<int> ans;
    int arr[] = {1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    substing(arr, ans, 0, n,false);

    return 0;
}