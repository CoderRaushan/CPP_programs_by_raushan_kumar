#include <iostream>
using namespace std;
template<typename T>
class Complex
{
private:
    T real;
    T img;
public:
    Complex(T r = 0, T i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+" << img<<"i"<<endl;
    }
   // friend Complex operator+(Complex c1, Complex c2);
Complex operator+(Complex c2)
{
    Complex temp;
    temp.real = real + c2.real;
    temp.img =img + c2.img;
    return temp;
}
};
int main()
{
    Complex<int> c1(3, 5), c2(3,2), c3;
    c3 = c1 + c2;
    c3.display();

    Complex<float> c4(3.6f, 5.6f), c5(3.1f,2.7f), c6;
    c6 = c4 + c5;
    c6.display();
    Complex<double> c7(3.634, 5.6234), c8(3.123,2.723), c9;
    c9 = c7 + c8;
    c9.display();
    Complex<char> c10('A','B'), c11('C','D'), c12;
    c12 = c10+ c11;
    c12.display();
    return 0;
};