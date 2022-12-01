//assignement-Filename range

#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string path_removal(const string &path)               //function for removing path from file name
{

    int index_of_slash = path.find_last_of("/\\");
    string file_name = path.substr(index_of_slash + 1);
    return file_name;
}
string extension_Removal(const string &file_name)     //function to remove extensions
{
    int index_of_lastdot = file_name.find_last_of('.');
    string new_file_name = file_name.substr(0, index_of_lastdot);
    return new_file_name;
}
string character_Removal(string file_name)            //function to remove characters
{
    char c[] = {'-', '_', '.'};
    for (int i = 0; i < sizeof(c); ++i)
    {
        file_name.erase(remove(file_name.begin(), file_name.end(), c[i]), file_name.end());
    }
    return file_name;
}

string words_Removal(string words)                    //function to remove some special words
{
    string word[] = {"tests", "test", "Tests", "spec", "Spec", "steps", "step", "Test"};
    for (string word1 : word)
    {
        size_t index = words.find(word1, 0);
        if (index != string::npos)
        {
            words.erase(index, word1.length());
        }
    }
    return words;
}

string getIndex(string path, string final_file)     // to getindex 
{
    int arrayIndex[2];
    auto starting_index = path.find(final_file);
    auto last_index = (starting_index) + final_file.length();

    arrayIndex[0] = starting_index;
    arrayIndex[1] = last_index;

    return to_string(arrayIndex[0]) + " " + to_string(arrayIndex[1]);
}

string calling_all_functions(string file_path)
{
    string result = path_removal(file_path);
    
    string file_after_extenssion = extension_Removal(result);
    
    string file_after_charremoval = character_Removal(file_after_extenssion);
    
    string file_after_words = words_Removal(file_after_charremoval);
    
    string final_index = getIndex(file_path, file_after_words);

    return final_index;
}

void test_case() // asserts for test cases
{
    assert(calling_all_functions("src/Hiker_spec.re") == "4 9");
    assert(calling_all_functions("test/hiker_test.exs") == "5 10");
    assert(calling_all_functions("wibble/test/hiker_spec.rb") == "12 17");
    assert(calling_all_functions("hiker_steps.rb") == "0 5");
    assert(calling_all_functions("hiker_spec.rb") == "0 5");
    assert(calling_all_functions("test_hiker.rb") == "5 10");
    assert(calling_all_functions("test_hiker.py") == "5 10");
    assert(calling_all_functions("test_hiker.sh") == "5 10");
    assert(calling_all_functions("tests_hiker.sh") == "6 11");
    assert(calling_all_functions("test_hiker.coffee") == "5 10");
    assert(calling_all_functions("hiker_spec.coffee") == "0 5");
    assert(calling_all_functions("hikerTest.chpl") == "0 5");
    assert(calling_all_functions("hiker.tests.c") == "0 5");
    assert(calling_all_functions("hiker_tests.c") == "0 5");
    assert(calling_all_functions("hiker_test.c") == "0 5");
    assert(calling_all_functions("hiker_Test.c") == "0 5");
    assert(calling_all_functions("HikerTests.cpp") == "0 5");
    assert(calling_all_functions("hikerTests.cpp") == "0 5");
    assert(calling_all_functions("HikerTest.cs") == "0 5");
    assert(calling_all_functions("HikerTest.java") == "0 5");
    assert(calling_all_functions("DiamondTest.kt") == "0 7");
    assert(calling_all_functions("HikerTest.php") == "0 5");
    assert(calling_all_functions("hikerTest.js") == "0 5");
    assert(calling_all_functions("hiker-test.js") == "0 5");
    assert(calling_all_functions("hiker-spec.js") == "0 5");
    assert(calling_all_functions("hiker.test.js") == "0 5");
    assert(calling_all_functions("hiker.tests.ts") == "0 5");
    assert(calling_all_functions("hiker_tests.erl") == "0 5");
    assert(calling_all_functions("hiker_test.clj") == "0 5");
    assert(calling_all_functions("fizzBuzz_test.d") == "0 8");
    assert(calling_all_functions("hiker_test.go") == "0 5");
    assert(calling_all_functions("hiker.tests.R") == "0 5");
    assert(calling_all_functions("hikertests.swift") == "0 5");
    assert(calling_all_functions("HikerSpec.groovy") == "0 5");
    assert(calling_all_functions("hikerSpec.feature") == "0 5");
    assert(calling_all_functions("hiker.feature") == "0 5");
    assert(calling_all_functions("hiker.fun") == "0 5");
    assert(calling_all_functions("hiker.t") == "0 5");
    assert(calling_all_functions("hiker.plt") == "0 5");
    assert(calling_all_functions("hiker") == "0 5");
    cout << "All test Cases Passed" << endl;
}

int main()
{
    test_case();
    return 0;
}
