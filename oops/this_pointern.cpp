#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    rectangle(int length, int breath)
    {
        this->length = length;
        this->breath = breath;
    }
};
int main()
{
    rectangle(2, 4);
    return 0;
}