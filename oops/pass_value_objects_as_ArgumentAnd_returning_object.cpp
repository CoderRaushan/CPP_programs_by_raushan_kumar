#include <iostream>
using namespace std;
class sample
{
public:
    int value;
    void getvalue()
    {
        cout << "enter a number:";
        cin >> value;
    }
    void display()
    {
        cout << value;
    }
    sample sum(sample &s)
    {  
        s.value = s.value + 10;
        return s;
    }
};
int main()
{
    sample t, s,h;
    t.getvalue();
    cout<<"before giving address:"<<endl;
    t.display();
    cout << endl;
    s=h.sum(t);
    s.display();
    cout << endl;
    t.display();
    return 0;
}
