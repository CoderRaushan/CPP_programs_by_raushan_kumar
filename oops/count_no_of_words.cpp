#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int countWords(string str)
{
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word)
    {
        count++;
    }
    return count;
}
int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s);
    return 0;
}
