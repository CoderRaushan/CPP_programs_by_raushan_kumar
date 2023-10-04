#include <iostream>
using namespace std;
int main()
{

    int n, c, m2 = 4, che= 4, pps = 4, eng= 3, che_l = 1, pps_l = 1, manu_p = 1,eng_l=1;
    int c1 = m2 + che + pps + eng + che_l + pps_l + manu_p + eng_l;
    double arr[8], o, o1, o2, o3, o4, o5, o6,o7;
    string sub[] = {"MAth", "Chemistry", "PPS", "English", "Chemistry-Lab","PPS-Lab", "Manufactering practics","English-Lab"};
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
    o4 = arr[4] / 50 * 100;
    o5 = arr[5] / 50 * 100;
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
    double res = p * m2;
    double res1 = p1 * che;
    double res2 = p2 * pps;
    double res3 = p3 * eng;
    double res4 = p4 * che_l;
    double res5 = p5 * pps_l;
    double res6 = p6 * manu_p;
    double res7 = p7 * eng_l;
    double dum = res + res1 + res2 + res3 + res4 + res5 + res6+res7;
    double sgpa = dum / c1;
    cout << "SGPA ---> "
         << sgpa;
   
    return 0;
}