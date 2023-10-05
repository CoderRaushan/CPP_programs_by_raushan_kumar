#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "after swap a:" << a << endl;
    cout << "after swap b:" << b << endl; 
}
int main()
{
    int n, n1;
    cout << "enter two number:";
    cin >> n>>n1;
 
    cout << "before swap a:" << n << endl;
    cout << "before swap b:" << n1 << endl;
   swap(n,n1);
    return 0;
}