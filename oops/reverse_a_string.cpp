#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() 
{
    string str = "Raushan kumar";
    reverse(str.begin(), str.end());
    cout << str << std::endl; 
    return 0;
}