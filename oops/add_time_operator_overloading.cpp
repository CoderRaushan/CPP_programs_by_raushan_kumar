#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds <<endl;
    }
    Time operator + (Time time2)
    {
        Time result;
        result.seconds=seconds+time2.seconds;
        result.minutes=minutes+time2.minutes+((result.seconds)/60);
        result.hours=hours+time2.hours+((result.minutes)/60);
        result.seconds=result.seconds%60;
        result.minutes=result.minutes%60;
        return result;
    }
};
int main()
{
    Time time1(1, 30, 45);
    Time time2(2, 15, 20);
    Time time3 = time1 + time2;
    cout << "Time 1: ";
    time1.displayTime();
    cout << "Time 2: ";
    time2.displayTime();
    cout << "time3: ";
    time3.displayTime();
    return 0;
}
