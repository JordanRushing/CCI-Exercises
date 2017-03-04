"""
Cracking the coding interview - Exercise 1.1
March 3rd, 2017
"""
import sys
from collections import Counter


def count_unique(testString):
    """
    This function determines if every character in a provided string
    is unique. Exits if yes or returns none if no
    """
    charFrequency = Counter(testString)

    for i in charFrequency.values():
        if i > 1:
            sys.exit("\nString does not contain all unique characters\n")


testString = input("\nPlease enter the string to test for duplicate chars: ")

count_unique(testString)

print("\nString contains all unique characters - success!\n")
