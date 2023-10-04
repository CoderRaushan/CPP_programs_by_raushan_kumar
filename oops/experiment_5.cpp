#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    static int maxAge;
public:
    Person(string name, int age) : name(name), age(age) {}
    void displayInfo()
    {
        cout << "Name:" << name << endl
             << "Age:" << age << endl;
    }
    static int getMaxAge()
    {
        return maxAge;
    }
};
int Person::maxAge = 100;
int main()
{
    Person person1("Raushan", 25);
    Person person2("jay", 30);
    person1.displayInfo();
    person2.displayInfo();
    cout<<"Maximum Allowed Age:"<< Person::getMaxAge()<<endl;
    return 0;
}
