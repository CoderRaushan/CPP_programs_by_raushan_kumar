#include <iostream>
using namespace std;
int main() {
    int num = 10;
    cout << "Unary Operators:" << endl;
    cout << "Original Value: " << num << endl;
    cout << "Unary Plus (+num): " << +num << endl;
    cout << "Unary Minus (-num): " << -num << endl;
    cout << "Logical NOT (!num): " << !num << endl;
    int a = 5, b = 3;
  
    cout << "a + b: " << (a + b) << endl;
    cout << "a - b: " << (a - b) << endl;
    cout << "a * b: " << (a * b) << endl;
    cout << "a / b: " << (a / b) << endl;
    cout << "a % b: " << (a % b) << endl;

    int x = 5, y = 3;
    cout << "x++ (Post-increment):" << x++ <<endl<< "x now: " << x << endl;
    int p = 5, q = 3;
    cout << "++p (Pre-increment):" << ++p << endl<<"p now: " << p << endl;
    int m = 5, n = 3;
    cout << "m-- (Post-decrement):" << m-- << endl<<"m now: " << m << endl;
    int r = 5, s = 3;
    cout << "--r (Pre-decrement):" << --r << endl<<"r now: " << r << endl;
    return 0;
}
