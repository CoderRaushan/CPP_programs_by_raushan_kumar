#include <bits/stdc++.h>
using namespace std;
int main()
{
    // explicit conversion
    char a = 'A';
    int b = (int)a;
    double c = (double)c;
    cout << "the value of a is:" << a << endl;
    cout << "the value of b is:" << b << endl;
    cout << "the value of c is:" << c << endl;
    // implicit conversion
    cout << "implicit conversion" << b << endl
         << endl;
    int x = 3;
    cout << "the value of x is:" << x << endl;
    float y = x;
    cout << "the value of y is:" << y << endl;
    int z = 65;
    char t = z;
    cout << "the value of z is:" << z << endl;
    cout << "the value of t is:" << t << endl;

    return 0;
}