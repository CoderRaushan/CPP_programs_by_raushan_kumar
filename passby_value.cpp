#include <iostream>
using namespace std;

class Time { // Changed class name to start with an uppercase letter (convention)
private:
  int h, m;
public:
  void getValue() {
    cout << "Enter hours & minutes: ";
    cin >> h >> m;
  }
  void putValue() {
    cout << "Hours: " << h << ", Minutes: " << m << endl;
  }
  void sum(Time t1, Time t2) {
    h = (t1.m + t2.m) / 60;
    m = (t1.m + t2.m) % 60;
    h = h + t1.h + t2.h;
    cout << "Total Hours: " << h << ", Total Minutes: " << m << endl;
  }
};

int main() {
  Time t1, t2, t3;

  t1.getValue();
  t2.getValue();

  t1.putValue();
  t2.putValue();                                      

  t3.sum(t1, t2);

  return 0;
}