#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};
class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};
class Car : public fourWheeler
{
public:
    Car()
    {
        cout << "Car has 4 Wheels\n";
    }
};
//note-> sabse pahale first base class 
//ka constructor call hoga phit derived class ka and so on.
int main()
{
    Car obj;
    return 0;
}
