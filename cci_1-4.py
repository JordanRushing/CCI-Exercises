"""
Cracking the coding interview - Exercise 1.4
March 4th, 2017
"""
import sys


def replace_space(testString):
    """
    This function replaces any spaces present in a provided string
    with the char sequence "%20"
    """
    newString = ""

    for c in testString:
        if c != ' ':
            newString += c
        elif c == ' ':
            newString += "%20"

    print(newString)
    sys.exit()


testString = input("\nPlease enter a string to be modifed: ")

replace_space(testString)
