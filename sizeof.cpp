#include <iostream>
using namespace std;
int dataType(string type)
{
    if (type == "int")
    {
        int size = sizeof(int);
        return size;
    }
    else if (type == "long")
    {
        int size = sizeof(long);
        return size;
    }
    else if (type == "double")
    {
        int size = sizeof(double);
      return size;
    }
    else if (type == "char")
    {
        int size = sizeof(char);
        return size;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string type;
    cout << "Enter a data type (e.g., int, long, double, char): ";
    cin >> type;
    dataType(type);
    if (dataType(type)==-1)
    {
        cout<<"invalid input:";
    }
    else
    {
        cout<<dataType(type)<<" bytes";
    }
    return 0;
}
