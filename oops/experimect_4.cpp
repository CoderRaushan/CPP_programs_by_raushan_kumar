#include <iostream>
using namespace std;
int main() {
    cout << "Numbers from 1 to 10 using a for loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    char choice;
    do {
        cout << "Enter 'q' to quit: ";
        cin >> choice;
    } while (choice != 'q' && choice != 'Q');

    int sum = 0;
    int num = 2;
    while (num <= 100) {
        sum += num;
        num += 2;
    }
    cout << "Sum of even numbers between 1 and 100: " << sum << endl;
    int start = 20;
    while (start <= 100) {
        if (start % 7 == 0) {
            cout << "First multiple of 7:" << start << endl;
            break;
        }
        start++;
    }
    cout << "Numbers from 1 to 10 except multiples of 3: ";
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
