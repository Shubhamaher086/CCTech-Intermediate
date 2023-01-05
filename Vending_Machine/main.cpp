#include "Vending_Machine.h"

using namespace std;
int main()
{
    Vending_Machine obj;

    int total_amount = obj.Insert_Coins();

    int amount = obj.Select_Product(total_amount);

    obj.Exact_Change(amount, total_amount);

    obj.Sold_out();

    return 0;
}