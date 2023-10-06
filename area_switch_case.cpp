#include <iostream>
using namespace std;
double areaSwitchCase(char ch, double a[])
{
    switch (ch)
    {
    case '1':
        cout<<"enter radius:";
        cin >> a[0];
       return (3.14 * a[0] * a[0]);
        break;
    case '2':
    cout<<"enter length and breath:";
        for (int i = 0; i <= 1; i++)
        {
            cin >> a[i];
        }
       return  (a[0] * a[1]);
        break;
        default : return -1;
    }
}

int main()
{
    double a[12];
    double r=areaSwitchCase('1', a);
    cout<<"area is:"<<r;
    return 0;
}