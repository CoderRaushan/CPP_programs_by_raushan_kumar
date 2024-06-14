#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = INT_MIN;
    int start = 0;
    int annstar = 0;
    int end = 0;
    int s = 0; // Temporary start index

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum > maxi) 
        {
            maxi = sum;
            annstar = s;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            s = i + 1; // Reset start index to next position
        }
    }

    for (int i = annstar; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return maxi;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArray(arr) << endl;
    return 0;
}
