#include <iostream>
using namespace std;
class demo
{
private:
    int real;
    int img;
public:
    demo(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    //way 1 to overload
    // demo add(demo d2)
    // {
    //     demo res;
    //     res.real = real + d2.real;
    //     res.img = img + d2.img;
    //     return res;
    // }
    //way 2 to overload 
     demo operator+(demo d)
    {
        demo res;
        res.real = real + d.real;
        res.img = img + d.img;
        return res;
    }
    void print ()
    {
        cout << real << "+" << img<<"i"<<endl;
    }
};
int main()
{
    demo d1(4, 6);
    demo d2(3, 7);
    demo d3;
     //d3=d1.add(d2);//way 1
    d3 = d1 + d2;//way 2
    d3.print();
    return 0;
} 