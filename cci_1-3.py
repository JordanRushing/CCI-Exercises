"""
Cracking the coding interview - Exercise 1.3
March 4th, 2017
"""
import sys
from collections import Counter


def check_perm(testString1, testString2):
    """
    This function determines if two provided strings are permutations
    of each other. Exits if yes and returns none if no
    """
    charFreq1 = Counter(testString1)
    charFreq2 = Counter(testString2)

    if charFreq1 == charFreq2:
        sys.exit("\nSuccess - provided strings confirmed permutations\n")


testString1 = input("\nPlease enter the first string to be checked: ")
testString2 = input("\nPlease enter the second string to be checked: ")

check_perm(testString1, testString2)

print("\nThe provided strings are NOT permutations of each other\n")
