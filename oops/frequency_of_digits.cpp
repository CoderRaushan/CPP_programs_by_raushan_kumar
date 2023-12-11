#include <iostream>
using namespace std;
void frequency()
{
    int n, f, c = 0, d;
    cout << "enter positive integer number:";
    cin >> n;
    d = n;
    cout << "enter a peticular number to count frequency of that number:";
    cin >> f;
    while (n != 0)
    {
        if (n % 10 == f)
        {
            c++;
        }
        n = n / 10;
    }
    cout << "the frequency of " << f << " in " << d << " is:" << c<<endl;
}
void table()
{
    int n;
    cout << "enter a number to be print table:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
}
void addition()
{
    int a,b;
    cout<<"enter two number to be add:"<<endl;
    cin>>a>>b;
    cout<<"the addation is:"<<a+b<<endl;
}
int main()
{
    int n1;
   
   do
   {
     cout << "ptess 1:for frequency of digits:" << endl
         << "ptess 2:for print the table:" << endl
         << "ptess 3:for addition:"<<endl
         << "ptess 4:for exit the menu:";
    cin >> n1;
    switch (n1)
    {
    case 1:
        frequency();
        break;

    case 2:
        table();
        break;
    case 3:
         addition();
         break;
    default: cout<<"Invalid input:";
    }
   }while(n1!=4);
    return 0;
}

