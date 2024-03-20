#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] == candidate) 
        {
            ++count;
        } 
        else 
        {
            --count;
            if (count == 0) 
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }
    
    count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == candidate) 
        {
            ++count;
        }
    }
    
    if (count > n / 2) 
    {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajorityElement(arr, n);
    if (majorityElement != -1) {
        cout << "Majority Element: " << majorityElement << endl;
    } else {
        cout << "No majority element found" << endl;
    }
    return 0;
}
