#include "Currency_Convertor.h"
using namespace std;

Currency_Convertor::Currency_Convertor(const string &filename) : exchange_rates(filename)
{
    Currency_list = {"USD", "GBP", "INR", "EUR", "CHF", "AUD", "SGD", "CNY", "JPY"};

    if (!exchange_rates.is_open())
    {
        throw runtime_error("Error opening file: " + filename);
    }
}

string Currency_Convertor::Currency_WantTo_Convert(vector<string> Currency_list)
{
    cout << "<--------------------Welcome to CCTech Currency converter------------------------>" << endl;
    cout << "Select the currency from which you want to convert: " << endl;
    for (int i = 0; i < Currency_list.size(); ++i)
    {
        cout << i + 1 << "." << Currency_list[i] << endl;
    }
    cout << ">=";
    cin >> Input_currency_Index;
    if (cin.fail())
    {
        cout << "Please enter a valid number" << endl;
        exit(0);
    }
    if ((Input_currency_Index < 1) || (Input_currency_Index > (Currency_list.size())))
    {
        cout << "The number is out of range" << endl;
        exit(0);
    }

    First_Currency = Currency_list[Input_currency_Index - 1];
    return First_Currency;
}

void Currency_Convertor::Currency_converted_Into(vector<string> Currency_list, string First_Currency)
{
    vector<string>::iterator itr;
    itr = find(Currency_list.begin(), Currency_list.end(), First_Currency);
    Currency_list.erase(itr);

    cout << "Select the currency you want to convert into: " << endl;
    for (int i = 0; i < Currency_list.size(); i++)
    {

        cout << i + 1 << "." << Currency_list[i] << endl;
    }
    cout << ">=";

    cin >> Output_currency_Index;
    if (cin.fail())
    {
        cout << "Please enter a valid number" << endl;
        exit(0);
    }
    if ((Output_currency_Index < 1) || (Output_currency_Index > (Currency_list.size())))
    {
        cout << "The number is out of range" << endl;
        exit(0);
    }
    Final_Currency = Currency_list[Output_currency_Index - 1];
}
void Currency_Convertor::Convert_Currency()
{
    cout << "Enter the amount to be convert: ";
    cin >> Amount_To_be_convert;
    while (Amount_To_be_convert < 0)
    {
        cout << "The amount entered is not valid.\nPlease enter a valid amount: ";
        cin >> Amount_To_be_convert;
    }

    while (exchange_rates >> Input_currency >> exchange_rate >> Output_currency)
    {

        if ((Input_currency == First_Currency))
        {

            if (Output_currency == Final_Currency)
            {

                Converted_Amount = Amount_To_be_convert * exchange_rate;
                break;
            }
        }
    }

    exchange_rates.close();

    cout << fixed << setprecision(2);
    cout << Amount_To_be_convert << " " << Input_currency << " would be " << Converted_Amount << " " << Output_currency << " on 2023-01-06 " << endl;
}

