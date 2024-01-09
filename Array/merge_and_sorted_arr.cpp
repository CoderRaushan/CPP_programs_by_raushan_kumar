#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> c;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;

    while (i < n1 && j < n2) 
    {
        if (a[i] <= b[j]) 
        {
            if (c.size() == 0 || c.back() != a[i]) 
            {
                c.push_back(a[i]);
            }
               i++;
        } 
        else {
            if (c.size() == 0 || c.back() != b[j]) 
            {
                c.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) 
    {
        if (c.size() == 0 || c.back() != a[i]) 
        {
            c.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) 
    {
        if (c.size() == 0 || c.back() != b[j]) 
        {
            c.push_back(b[j]);
        }
        j++;
    }
    return c;
}
int main() 
{
      vector<int> array1 = {1, 3, 5, 7, 9};
    vector<int> array2 = {2, 4, 6, 8, 10};

    vector<int> result = sortedArray(array1, array2);

    cout << "Merged and sorted array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}


