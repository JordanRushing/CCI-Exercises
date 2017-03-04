//================================================
// Cracking the coding interview - Exercise 1.1
// March 3rd, 2017
//================================================

#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string.h>

void reverse(char* str)
{// This function will reverse a null-terminated char* type string
    std::stack<char> reverseStack;

    for (size_t i = 0; i < strlen(str); ++i) {
        if (str[i] != '\0') {
            reverseStack.push(str[i]);
        }
        else if (str[i] == '\0') {
            while (!reverseStack.empty()) {
                std::cout << reverseStack.top();
                reverseStack.pop();
            }
        }
    }
}


int main()
{
    char* testString;

    std::cout << "\nPlease enter a null-terminated string to be reversed: \n";
    std::cin >> testString;

    reverse(testString);

    return 0;
}
