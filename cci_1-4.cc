//================================================
// Cracking the coding interview - Exercise 1.4
// March 3rd, 2017
//================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include <queue>

std::string replace_space(std::string testStr)
{// This function replaces spaces present in a string with "%20"
    std::queue<char> newString; // queue used for fun here - not optimal
    std::string modiString;

    for (auto c: testStr) {
        if (c != ' ') {
            newString.push(c);
        }
        else if (c == ' ') {
            newString.push('%');
            newString.push('2');
            newString.push('0');
        }
    }

    while (!newString.empty()) {
        modiString += newString.front();
        newString.pop();
    }

    return modiString;
}

int main()
{
    std::string testString, modifiedString;

    std::cout << "\nPlease enter a string to be modified: \n";
    std::getline (std::cin, testString);

    modifiedString = replace_space(testString);

    std::cout << "\n" << modifiedString << "\n";

    return 0;
}
