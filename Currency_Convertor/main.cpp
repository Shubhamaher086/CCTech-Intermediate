#include "Currency_Convertor.h"
using namespace std;
int main(int argc, char *argv[])
{
    char Yes_No;
    do
    {
        Currency_Convertor convertor("exchange_currency.txt");

        string val = convertor.Currency_WantTo_Convert(convertor.Currency_list);
        convertor.Currency_converted_Into(convertor.Currency_list, val);
        convertor.Convert_Currency();
        cout << "Do you want to continue? (Y/N)" << endl;
        cin >> Yes_No;
        while (Yes_No != 'Y' && Yes_No != 'y' && Yes_No != 'N' && Yes_No != 'n')
        {
            cout << "Invalid character. Please enter Y or N: ";
            cin >> Yes_No;
        }
    } while (Yes_No == 'Y' || Yes_No == 'y');
    return 0;
}
