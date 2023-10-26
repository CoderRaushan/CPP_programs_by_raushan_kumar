#include <iostream>
#include <exception>
using namespace std;
class OverSpeed : public exception
{
    int speed;

public:
    const char *what()
    {
        return "check yout car speed you are in the car not in an aeroplane ";
    }
};
int main()
{
    int carspeed = 0;
    try
    {
        while (1)
        {
            carspeed = carspeed + 10;
            if (carspeed > 100)
            {

                OverSpeed s;
                throw s;
            }
            cout << "Carspeed: " << carspeed << endl;
        }
    }
    catch (OverSpeed ex)
    {
        cout << ex.what();
    }

    return 0;
}