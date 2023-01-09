#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;
class Currency_Convertor
{
public:
    vector<string> Currency_list;

    string Input_currency, Output_currency;
    int Input_currency_Index, Output_currency_Index;
    string First_Currency, Final_Currency;

    double exchange_rate, Amount_To_be_convert, Converted_Amount;
    Currency_Convertor(const string &filename);
    string Currency_WantTo_Convert(vector<string> Currency_list);
    void Currency_converted_Into(vector<string> Currency_list, string First_Currency);
    void Convert_Currency();

private:
    ifstream exchange_rates;
};
