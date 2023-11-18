#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("my file.txt", ios::out);
    char ch[50];
    file >> ch;
    if (!file.bad())
    {
        cout << "Operation not success!!!:" << file.bad() << endl;
    }
    else
    {
        cout << "Data read from file - "<< ch << endl;
    }
    return 8;
}