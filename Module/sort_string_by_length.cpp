#include "sort_string_by_length.h"

bool compare(std::string str1, std::string str2)
{
    if (str1.length() < str2.length())
        return true;
    else
        return false;
}