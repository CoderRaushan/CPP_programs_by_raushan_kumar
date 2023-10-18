// #include<bits/stdc++.h>
// using namespace std;
// void  fun(int s)//5
// {
//    if(s<=0)
//    {
//     return;
//    }
//     fun(s-1);//step 1
//     cout<<s;//step 2
// }
// int main()
// {
// fun(5);
//  return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> generateArray(int n) 
// {
//     if (n == 1) 
//     {
//         return {1};
//     } 
//     else 
//     {
//         vector<int> result = generateArray(n - 1);
//         result.push_back(n);
//         return result;
//     }
// }

// int main() 
// {
//     int n = 10; 
//     vector<int> arr = generateArray(n);
//     for (int num : arr) 
//     {
//         cout << num << " ";
//     }
//     return 0;
// }
