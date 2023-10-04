#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "enter first number:" << endl;
    cin >> a;
    cout << "enter second number:" << endl;
    cin >> b;
    cout << "enter third number:" << endl;
    cin >> c; // 4 6 8
    d = (a > b && a > c) ? a : (b > a && b > c)?b: c;
    cout << "the greatest among three number is:"<<d;
    return 0;
}