#include <iostream>
using namespace std;
class Distance
{
private:
    int meters;
public:
    Distance()
    {
        meters = 0;
    }
    void displayData() 
    {
        cout << "Meters value: " << meters<<endl;
    }
    friend void addValue(Distance &d);
};
void addValue(Distance &d)
{   
    d.meters=d.meters+6;
}
int main()
{
    Distance d1; //0
    d1.displayData();//0
    addValue(d1);//5
    d1.displayData();//5
    return 0;
}