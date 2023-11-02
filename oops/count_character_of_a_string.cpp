#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Str = "raushan kumar";
    int length1 = Str.length();
    cout << "Using length(): " << length1 << " characters" << endl;
    int length2 = Str.size();
    cout << "Using size(): " << length2 << " characters" << endl;
    return 0;
}