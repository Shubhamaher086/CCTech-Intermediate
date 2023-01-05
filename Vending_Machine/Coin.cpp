#include "Vending_Machine.h"

using namespace std;

int Vending_Machine::Insert_Coins()
{
    float nickels = 0, dimes = 0, Quarter = 0;
    cout << "<---------------welcome to vending machine-------------------->" << endl;
    while (choice != 4)
    {

        cout << "select currency to enter :\n1: nickel\n2: dimes\n3: Quarter\n4: Submit total coins" << endl;

        cin >> choice;
        if (cin.fail())
        {
            cout << "please insert coin" << endl;
        }
        switch (choice)
        {
        case 1:
            cout << "Enter the number of coins :";
            cin >> quantity;
            nickels = quantity * 5;
            break;
        case 2:
            cout << "Enter the number of coins :";
            cin >> quantity;
            dimes = quantity * 10;
            break;
        case 3:
            cout << "Enter the number of coins :";
            cin >> quantity;
            Quarter = quantity * 25;
            break;
        case 4:
            break;
        default:
            cout << "Please input valid coins" << endl;
            break;
        }
    }
    total_amount = nickels + dimes + Quarter;
    cout << "Total Amount Inserted =" << total_amount <<"Cents"<< endl;
    return total_amount;
}

int Vending_Machine::Select_Product(int total_amount)
{

    cout << "\n<-------------------Items Available----------------->\n1: cola  :100 CFents\n2: chips: 50 Cents\n3: candy: 65 Cents\n4: Cancel" << endl;
    cout << "Select your item from list :";
    cin >> choice;

    if (MAX_COLA_QUANTITY <= 0 || MAX_CHIPS_QUANTITY <= 0 || MAX_CANDY_QUANTITY <= 0)
    {
        cout << "SORRY ITEMS WERE SOLD OUT,TRY NEXT TIME " << endl;
        exit(0);
    }
    switch (choice)
    {
    case 1:
        if (total_amount >= 100)
            cout << "Enter quantity :";
        else
        {
            cout << "Insert more coins to buy item " << endl;
            exit(0);
        }
        cin >> quantity;
        amount = quantity * 100;
        if (amount <= total_amount)
        {
            MAX_COLA_QUANTITY = MAX_COLA_QUANTITY - quantity;
            cout << "remaining Quantity of Cola is :" << MAX_COLA_QUANTITY << endl;
            
            return amount;
        }
        else
            cout << "Insert more coins to buy item " << endl;
        break;
    case 2:
        if (total_amount >= 50)
            cout << "Enter quantity :";
        else
        {
            cout << "Insert more coins to buy item " << endl;
            exit(0);
        }
        cin >> quantity;
        amount = quantity * 50;
        if (amount <= total_amount)
        {
            MAX_CHIPS_QUANTITY = MAX_CHIPS_QUANTITY - quantity;
            cout << "Remaining Quantity of Chips is :" << MAX_CHIPS_QUANTITY << endl;
           
            return amount;
        }
        else
            cout << "Insert more coins to buy item " << endl;
        break;
    case 3:
        if (total_amount >= 65)
            cout << "Enter quantity :";
        else
        {
            cout << "Insert more coins to buy item " << endl;
            exit(0);
        }
        cin >> quantity;
        amount = quantity * 65;

        if (amount <= total_amount)
        {
            MAX_CANDY_QUANTITY = MAX_CANDY_QUANTITY - quantity;

            cout << "remaining Quantity of candy is :" << MAX_CANDY_QUANTITY << endl;
            
            return amount;
        }
        else
            cout << "Insert more coins to buy item " << endl;
        break;
    case 4:
        cout << "Thank you please Visit again or INSERT COIN" << endl;
        break;
    default:
        cout << "Invalid input,please enter valid quantity";
        break;
    }
    return amount;
}
void Vending_Machine::Sold_out()
{
    if (MAX_CANDY_QUANTITY <= 0 || MAX_CHIPS_QUANTITY <= 0 || MAX_CANDY_QUANTITY <= 0)
    {

        cout << "SORRY ITEMS WERE SOLD OUT,TRY NEXT TIME " << endl;
    }
}
void Vending_Machine::Exact_Change(int amount, int total_amount)
{
    int change_return = total_amount - amount;
    cout << "Change return :" << change_return <<" Cents "<< endl;
    cout << "<-----------------Thank you visit again------------------->" << endl;
}


