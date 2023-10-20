#include <iostream>
using namespace std;
class Cube
{
public:
    static int objectCount;
    Cube()
    {
        objectCount++;
    }
};
int Cube::objectCount = 0;

int main()
{
    Cube c1;
    cout << "Total objects: " << Cube::objectCount << endl;
    Cube c2;
    cout << "Total objects: " << Cube::objectCount << endl;
    Cube c3;
    cout << "Total objects: " << Cube::objectCount << endl;
    return 0;
}