#include <iostream>
using namespace std;
class hello
{
private:
    int kg;

public:
    hello(int k = 0)
    {
        kg = k;
    }
    hello operator++()
    {
        hello h;
        ++kg;
        h.kg = h.kg;
        return h;
    }
    hello operator++(int)
    {
        hello h;
        kg++;
        h.kg = h.kg;
        return h;
    }
    hello operator--()
    {
        hello h;
        --kg;
        h.kg = h.kg;
        return h;
    }
    hello operator--(int)
    {
        hello h;
        kg--;
        h.kg = h.kg;
        return h;
    }
    void display()
    {
        cout << "weight is:" << kg << endl;
    }
};
int main()
{
    hello obj,obj1;
    obj.display();
    ++obj;
    obj.display();
    obj++;
    obj.display();
    cout<<"sorry some interval here:"<<endl;
    obj1=obj;
   obj1.display();
    --obj;
    obj.display();
    obj--;
    obj.display();

    return 0;
}