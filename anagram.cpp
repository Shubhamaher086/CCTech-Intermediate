// Write a program to generate all potential anagrams of an input string.

#include <iostream>
#include <cassert>
#include <algorithm>

std::string anagram(std::string test)
{

    std::string result = "";
    do
    {
        result += test + " ";
    } 
    while (next_permutation(test.begin(), test.end()));

    return result;
}

int main(int argc, char *agrv[])
{

    std::cout << anagram("hello") << std::endl;
    return EXIT_SUCCESS;
}