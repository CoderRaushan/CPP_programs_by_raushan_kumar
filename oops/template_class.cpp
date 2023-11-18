#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Add
{
private:
    T a;
    T b;

public:
    void setdata(T x, T y)
    {
        a = x;
        b = y;
    }
    T add()
    {
        return (a + b);
    }
};
int main()
{
    Add<int> a;
    a.setdata(5, 5);
    cout << "sum of two no is:" << a.add() << endl;

    Add<double> b;
    b.setdata(5.345, 4.35345);
    cout << "sum of two no is:" << b.add() << endl;

    Add<float> c;
    c.setdata(4.3, 2.3);
    cout << "sum of two no is:" << c.add() << endl;

    return 0;
}