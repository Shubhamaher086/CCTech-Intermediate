// Write a program to generate all potential anagrams of an input string.

#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

string anagram(string test)
{
    sort(test.begin(),test.end());
    string result = "";
    do
    {
        result += test + " ";
    } 
    while (next_permutation(test.begin(), test.end()));

    return result;
}

int main(int argc, char *argv[])
{

    cout << anagram("Hello") << endl;
    return EXIT_SUCCESS;
}
