#include "sort_string_by_length.h"

bool compare(string str1, string str2)
{
    if (str1.length() < str2.length())
        return true;
    else
        return false;
}