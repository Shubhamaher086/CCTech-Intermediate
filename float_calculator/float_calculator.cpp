// Design a calculator for float values
// Implement a calculator that will handle addition, subtraction, multiplication and division operations

#include <iostream>
#include <limits.h>
#include <cassert>

using namespace std;

float addition(float num1, float num2)
{
    float result = num1 + num2;
    if ((num1 > 0 && num2 > 0) && result < 0)
    {
        cout << "float in Overflow" << endl;
    }
    if ((num1 < 0 && num2 < 0) && result > 0)
    {
        cout << "float in underflow" << endl;
    }

    return result;
}
float substraction(float num1, float num2)
{
    float result = (num1) - (num2);
    if ((num1 > 0 && num2 < 0) && result < 0)
    {
        cout << "float in Overflow" << endl;
    }
    if ((num1 < 0 && num2 > 0) && result > 0)
    {
        cout << "float in underflow" << endl;
    }

    return result;
}

float multiplication(float num1, float num2)
{
    float result = (num1) * (num2);

    if ((num1 > 0 && num2 > 0) && result < INT_MAX)
    {
        cout << "float in Overflow" << endl;
    }
    if (((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) && result > INT_MIN)
    {
        cout << "float in underflow" << endl;
    }

    return result;
}
float division(float num1, float num2)
{
    if (num2 == 0)
    {
        throw invalid_argument("Division by zero is undefined");
    }
    float result = num1 / num2;
    return result;
}
int main()
{
    float no1, no2;
    cin >> no1 >> no2;
    if (cin.fail())
    {
        cout << "check given interger are not in range" << endl;
    }
    float result = addition(no1, no2);
    cout << "Addition :" << result << endl;

    float result2 = substraction(no1, no2);
    cout << "Substraction :" << result2 << endl;

    float result3 = multiplication(no1, no2);
    cout << "multiplication :" << result3 << endl;

    float result4 = division(no1, no2);
    cout << "division :" << result4 << endl;

    return EXIT_SUCCESS;
}
