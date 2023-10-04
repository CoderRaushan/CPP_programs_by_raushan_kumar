#include <iostream>
using namespace std;
int main()
{
    int a, b,d;
    cout << "enter first number:" << endl;
    cin >> a;
    cout << "enter second number:" << endl;
    cin >> b;
    
    d = (a > b) ? a:b;
    cout << "the greatest among three number is:"<<d;
    return 0;
}