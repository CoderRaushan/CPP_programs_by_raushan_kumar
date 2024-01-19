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
        else 
        {
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
     vector<int> array1 = {1, 2, 3, 4, 5};
    vector<int> array2 = {3, 4, 5, 6, 7};
    vector<int> result = sortedArray(array1, array2);
    cout << "Union of arrays:";
    for (int num : result) 
    {
        cout << num << " ";
    }
    return 0;
}


