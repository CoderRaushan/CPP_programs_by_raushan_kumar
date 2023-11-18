#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    fstream file;
    file.open("my file.txt", ios::out);
    char ch[50];
    file >> ch;
    if (file.fail())
    {
        cout << "Operation not success!!!" << endl;
    }
    else
    {
        cout << "Data read from file - "<< ch << endl;
    }
    return 0;
}