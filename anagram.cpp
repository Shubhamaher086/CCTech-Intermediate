// Write a program to generate all potential anagrams of an input string.

#include <iostream>
#include <cassert>
#include <algorithm>

std::string anagram(std::string CandidateString)
{

    std::string result = "";
    do
    {
        result += CandidateString + " ";
    } 
    while (next_permutation(CandidateString.begin(), CandidateString.end()));

    return result;
}

int main(int argc, char *agrv[])
{

    std::cout << anagram("hello") << std::endl;
    return EXIT_SUCCESS;
}