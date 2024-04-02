#include <bits/stdc++.h>
using namespace std;
void substing(int arr[], vector<int> ans, int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    substing(arr, ans, n, idx + 1);
    ans.push_back(arr[idx]);
    substing(arr, ans, n, idx + 1);
}
int main()
{

    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    substing(arr, v, n, 0);
    return 0;
}

 