#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("my file.txt", ios::out);
    char ch[50];
    cout<< "Enter string value:";
    cin.getline(ch,50);
    file>> ch;
    if (file.good())
    {
        cout << "Data written successfully in the File..." << endl;
    }
    else
    {
        cout << "Operation unsuccessful" << endl;
    }
    return 0;
}