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

    cout << "Select the currency from which you want to convert: " << endl;
    for (int i = 0; i < Currency_list.size(); ++i)
    {

        cout << i + 1 << "." << Currency_list[i] << endl;
    }
    cout << ">=";
    cin >> Input_currency_Index;
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
    Final_Currency = Currency_list[Output_currency_Index - 1];
}
void Currency_Convertor::Convert_Currency()
{
    cout << "Enter the amount to be convert: ";
    cin >> Amount_To_be_convert;

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

int main()
{
    char ch;
    do
    {
        Currency_Convertor convertor("exchange_currency.txt");
        cout << "<--------------------Welcome to CCTech Currency converter------------------------>" << endl;
        string val = convertor.Currency_WantTo_Convert(convertor.Currency_list);
        convertor.Currency_converted_Into(convertor.Currency_list, val);
        convertor.Convert_Currency();
        cout << "Do you want to continue? (Y/N)" << endl;
        cin >> ch;
    } while (ch == 'Y' || 'y');
    return 0;
}
