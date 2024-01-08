#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void reversepart(int i, int j, vector<int> &v)
{
    while (i <= j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
}   
    int main()
    {
       
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(6);
        v1.push_back(2);
        v1.push_back(3);
        v1.push_back(7);
        v1.push_back(4);
        v1.push_back(8);
        display(v1);
        int k = 7;
        int n = v1.size();
         if(k>n)
         {
            k=k%n;
         }
        reversepart(0, n - 1 - k, v1); // int n=v.size()-1-k;
        reversepart(n - k, n - 1, v1);
        reversepart(0, n - 1, v1);
        display(v1);
        return 0;
    }