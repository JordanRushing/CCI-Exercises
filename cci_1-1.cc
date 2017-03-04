//================================================
// Cracking the coding interview - Exercise 1.1
// March 3rd, 2017
//================================================

#include <iostream>
#include <vector>
#include <stdlib.h>

int main()
{// This program tests a provided string to determine if all chars are unique
    std::string testString;
    std::vector<int> charFrequency(26, 0);

    std::cout << "Please enter the string to test for duplicate chars: ";
    std::cin >> testString;

    for (auto c: testString) {
        charFrequency[c - 'a']++;
        if (charFrequency[c - 'a'] > 1) {
            std::cout << "\nString does not contain all unique characters\n";
            return 0;
        }
    }

    std::cout << "\nString contains all unique characters - success!\n";
    return 0;
}
