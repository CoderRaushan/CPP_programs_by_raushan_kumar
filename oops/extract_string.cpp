#include <iostream>
#include <string>
using namespace std;
int main() {
    string original = "HelloWorld!";
    string substring = original.substr(5,5);
    cout << "Original String: " << original<< endl;
    cout << "Substring: " << substring << endl;
    return 0;
}