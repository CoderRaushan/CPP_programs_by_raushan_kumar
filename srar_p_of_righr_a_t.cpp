#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "enter a number:";
    cin >> n;
    while (i <=n)
    {
        int j = 1;
        while (j <=i)
        {
            cout << "*";
            j++;
        }
        while (j <=n)
        {
            cout << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
