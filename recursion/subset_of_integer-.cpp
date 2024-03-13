#include <bits/stdc++.h>
using namespace std;
void substing(int arr[], vector<int> &ans, int idx, int n)
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
    ans.push_back(arr[idx]);
    substing(arr, ans, idx + 1, n);
    ans.pop_back();
    substing(arr, ans, idx + 1, n);
}
int main()
{
    vector<int> ans;
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    substing(arr, ans, 0, n);

    return 0;
}