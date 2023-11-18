#include <bits/stdc++.h>
using namespace std;
template <typename T,typename U>
class Add
{
private:
    T a;
    U b;

public:
    void setdata(T x, U y)
    {
        a = x;
        b = y;
    }
    U add()
    {
        return (a + b);
    }
};
int main()
{
    Add<int,int> a;
    a.setdata(5, 5);
    cout << "sum of two no is:" << a.add() << endl;

    Add<int,double> b;
    b.setdata(5,4.764);
    cout << "sum of two no is:" << b.add() << endl;

    Add<float,double> c;
    c.setdata(4.3f, 2.323);
    cout << "sum of two no is:" << c.add() << endl;

    return 0;
}