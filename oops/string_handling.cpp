#include <iostream>
#include <string>
int main() 
{
    // Declare and initialize strings
    std::string str1 = "Hello";
    std::string str2 = "C++";
    // Concatenate strings
    std::string result = str1 + str2;

    // Print concatenated string
    std::cout << "Concatenated String: " << result << std::endl;

    // Find the length of the string
    std::cout << "Length of the String: " << result.length() << std::endl;

    // Access individual characters
    std::cout << "First character: " << result[0] << std::endl;

    // Substring
    std::string substring = result.substr(3,6);
    std::cout << "Substring: " << substring << std::endl;

    // Compare strings
    std::string compareStr = "HelloC++";
    if (result == compareStr) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }   

    return 0;
}
