#include <iostream>
using namespace std;
class Distance
{
private:
    int meters;
public:
    Distance(int d=0)
    {
        meters = d;
    }
    void displayData() 
    {
        cout << "Meters value: " << meters<<endl;
    }
    friend void addValue(Distance &d);
};
void addValue(Distance &d)
{   
    d.meters=d.meters+5;
}
int main()
{
    Distance d1(5); //0
    d1.displayData();//0
    addValue(d1);//5
    d1.displayData();//5
    return 0;
}