#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str) 
{
    stringstream ss(str);
    string word, reversed;
    
    while (ss >> word) 
    {
        if (!reversed.empty())
            reversed = word + " " + reversed;
        else
            reversed = word;
    }
    return reversed;
}

int main() {
    string str = "Welcome to Coding Ninjas";
    cout <<str<< endl;
    cout << reverseString(str) << endl;
    return 0;
}
