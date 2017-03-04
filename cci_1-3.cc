//================================================
// Cracking the coding interview - Exercise 1.3
// March 3rd, 2017
//================================================

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

int check_perm(std::string testStr1, std::string testStr2)
{
    std::vector<int> charFreq1(26, 0);
    std::vector<int> charFreq2(26, 0);

    for (auto c: testStr1) charFreq1[c - 'a']++;
    for (auto c: testStr2) charFreq2[c - 'a']++;

    if (charFreq1 == charFreq2)
        return 1;
    else
        return 0;
}

int main()
{
    std::string testString1, testString2;

    std::cout << "\nPlease enter two strings to be checked for permutation: \n";
    std::cin >> testString1 >> testString2;

    if (check_perm(testString1, testString2))
        std::cout << "\nYes - the provided strings are permutations of each other\n";
    else
        std::cout << "\nNo - the provided strings are not permutations of each other\n";

    return 0;
}
