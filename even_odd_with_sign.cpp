#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "you enterd positive and even number";
        }
        else
        {
            cout << "you enterd positive and odd number";
        }
        break;
    }
    while (n < 0)
    {
        if (n % 2 == 0)
        {
            cout << "you enterd negative and even number";
        }

        else
        {
            cout << "you enterd negative and odd number";
        }
        break;
    }
   while(n==0)
   {
    cout<<"you enterd zero";
   break;
   }
   
    return 0;
}