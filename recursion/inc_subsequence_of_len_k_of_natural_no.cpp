#include <bits/stdc++.h>
using namespace std;
void substing(int arr[], vector<int> ans, int n, int idx, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k)return;
    substing(arr, ans, n, idx + 1, k);
    ans.push_back(arr[idx]);
    substing(arr, ans, n, idx + 1, k);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    substing(arr, v, n, 0, k);
    return 0;
}
