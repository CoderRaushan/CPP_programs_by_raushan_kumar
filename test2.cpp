#include <iostream>
#include <thread>
using namespace std;
thread_local int var = 10;
int main()
{
    thread th1([]() {
        cout << "Thread 1 var Value: " << (var += 18) << '\n';
    });
    thread th2([]() {
        cout << "Thread 2 var Value: " << (var += 7) << '\n';
    });
    thread th3([]() {
        cout << "Thread 3 var Value: " << (var += 13) << '\n';
    });
    th1.join();
    th2.join();
    th3.join();
    return 0;
}