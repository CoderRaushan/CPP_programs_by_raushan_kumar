#include <iostream>
#include <vector>
using namespace std;
vector<string> generateArray(int n) 
{
    if (n == 0) 
    {
        return vector<string>();
    } 
    else 
    {
        vector<string> result = generateArray(n - 1);
        result.push_back("Coding Ninjas");
        return result;
    }
}

int main() 
{
    int n;
    cin >> n;
    vector<string> result = generateArray(n);
    for (const string& element : result) {
        cout << element << " ";
    }
    return 0;
}