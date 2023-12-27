#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int n=i%2;//1%2=1,n=1
        for (int j = 1; j <=i; j++)
        {
         
                cout <<n<<" ";
                 n=1-n;
        }
        cout << "\n";
    }
    return 0;
}