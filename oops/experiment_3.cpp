#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (score >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    if (score >= 60)
    {
        cout << "You passed the course." << endl;
        if (score >= 90)
        {
            cout << "Congratulations on an excellent score!" << endl;
        }
    }
    switch (score / 10)
    {
    case 9:
    case 10:
        cout << "Grade: A" << endl;
        break;
    case 8:
        cout << "Grade: B" << endl;
        break;
    case 7:
        cout << "Grade: C" << endl;
        break;
    case 6:
        cout << "Grade: D" << endl;
        break;
    default:
        cout << "Grade: F" << endl;
    }

    return 0;
}
