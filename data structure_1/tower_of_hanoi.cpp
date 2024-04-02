#include<iostream>
using namespace std;
void toh(int n, char beg, char aux, char end)
{
    if (n <= 0)
    {
        cout << "invalid input:";
    }
    else if (n == 1)
    {
        cout << "disk " << n << " moved from " << beg << " -> " << end << endl;
        return;
    }
    else
    {
        toh(n - 1, beg, end, aux);
        cout << "disk " << n << " moved from " << beg << " -> " << end << endl;
        toh(n - 1, aux, beg, end); 
    }
}
int main()
{
    int n;
    cout << "enter no of disks:";
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}
