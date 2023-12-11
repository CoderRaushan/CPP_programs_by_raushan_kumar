#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("my file.txt", ios::in);
    char data[50];
    while (!file.eof())
    {
        file >> data;
    }
    cout << "data read: " << data;
    file.close();
    return 0;
}