#include <iostream>
using namespace std;
int main()
{
    
    int n, c, m1 = 4, PHY = 4, BEE = 4, EGD = 3, PEEM = 3, PHYSICSLAB = 1, BEELAB = 1, MENT = 1;
    int c1 = m1 + PHY + BEE + EGD + PEEM + PHYSICSLAB + BEELAB + MENT;
    double arr[8], o, o1, o2, o3, o4, o5, o6, o7;
    string sub[] = {"Physics", "math", "Bee", "Egd", "Peem", "Mentoring", "Physics-Lab", "Bee-Lab"};
    for (n = 0; n <= 7; n++)
    {
        cout << "Enter your " << sub[n] << " marks"
             << ":";
        cin >> arr[n];
    }
    o = arr[0] / 100 * 100;
    o1 = arr[1] / 100 * 100;
    o2 = arr[2] / 100 * 100;
    o3 = arr[3] / 100 * 100;
    o4 = arr[4] / 100 * 100;
    o5 = arr[5] / 100 * 100;
    o6 = arr[6] / 50 * 100;
    o7 = arr[7] / 50 * 100;
    int p = (o / 10) + 1;
    int p1 = (o1 / 10) + 1;
    int p2 = (o2 / 10) + 1;
    int p3 = (o3 / 10) + 1;
    int p4 = (o4 / 10) + 1;
    int p5 = (o5 / 10) + 1;
    int p6 = (o6 / 10) + 1;
    int p7 = (o7 / 10) + 1;
    double res = p * m1;
    double res1 = p1 * PHY;
    double res2 = p2 * BEE;
    double res3 = p3 * EGD;
    double res4 = p4 * PEEM;
    double res5 = p5 * MENT;
    double res6 = p6 * PHYSICSLAB;
    double res7 = p7 * BEELAB;
    double dum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7;
    double sgpa = dum / c1;
    cout << "SGPA\n"
         << sgpa;
   
    return 0;
}