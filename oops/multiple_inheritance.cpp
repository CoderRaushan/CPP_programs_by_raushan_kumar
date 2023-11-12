#include <iostream>
using namespace std;
class Vehicle//1st base class 
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};
// second base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle\n";
    }
};
class Car : public Vehicle,FourWheeler
{ 

};
int main()
{
    Car obj;
    return 0;
}
