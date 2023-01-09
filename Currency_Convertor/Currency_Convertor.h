#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iomanip>

class Currency_Convertor
{
private:
    std::ifstream exchange_rates;
    std::string Input_currency, Output_currency;
    int Input_currency_Index, Output_currency_Index;
    std::string First_Currency, Final_Currency;

public:
    std::vector<std::string> Currency_list;

    double exchange_rate, Amount_To_be_convert, Converted_Amount;
    Currency_Convertor(const std::string &filename);
    std::string Currency_WantTo_Convert(std::vector<std::string> Currency_list);

    void Currency_converted_Into(std::vector<std::string> Currency_list, std::string First_Currency);
    void Convert_Currency();
};
