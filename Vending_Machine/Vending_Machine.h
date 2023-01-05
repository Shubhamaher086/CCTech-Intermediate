#pragma once
#include <iostream>
#include <string>

#define MAX_COLA_QUANTITYS 100
#define MAX_CHIPS_QUANTITYS 100
#define MAX_CANDY_QUANTITYS 100

class Vending_Machine
{
public:
    public:
    float amount = 0;
    int quantity = 0, choice;
    int total_amount = 0;
    unsigned int remaining_quantity = 0;

    int MAX_COLA_QUANTITY = 10, MAX_CHIPS_QUANTITY = 10, MAX_CANDY_QUANTITY = 10;

    Vending_Machine(){};
    int Insert_Coins();
    int Select_Product(int);
    void Exact_Change(int, int);
    void Sold_out();

};