#include <iostream>
using namespace std;

class Vehicle // base class
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};
class Car : public Vehicle
{
};
int main()
{
    Car obj;
    return 0;
}
