// Design a calculator for integer values
// Implement a calculator that will handle addition, subtraction, multiplication and division operations
//  for both signed and unsigned integers.
#include <iostream>
#include <limits.h>
#include <cassert>

using namespace std;

int addition(int num1, int num2)
{
    int result = num1 + num2;
    if ((num1 > 0 && num2 > 0) && result < 0)
    {
        cout << "Integer in Overflow" << endl;
    }
    if ((num1 < 0 && num2 < 0) && result > 0)
    {
        cout << "Integer in underflow" << endl;
    }

    return result;
}
int substraction(int num1, int num2)
{
    int result = (num1) - (num2);
    if ((num1 > 0 && num2 < 0) && result < 0)
    {
        cout << "Integer in Overflow" << endl;
    }
    if ((num1 < 0 && num2 > 0) && result > 0)
    {
        cout << "Integer in underflow" << endl;
    }

    return result;
}

int multiplication(int num1, int num2)
{
    int result = (num1) * (num2);

    if ((num1 > 0 && num2 > 0) && result < INT_MAX)
    {
        cout << "Integer in Overflow" << endl;
    }
    if (((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) && result > INT_MIN)
    {
        cout << "Integer in underflow" << endl;
    }

    return result;
}
int division(int num1, int num2)
{
    if (num2 == 0)
    {
        throw invalid_argument("Division by zero is undefined");
    }
    int result = num1 / num2;
    return result;
}
int main()
{
    int no1, no2;
    cin >> no1 >> no2;
    if (cin.fail())
    {
        cout << "check given interger are not in range" << endl;
    }
    int result = addition(no1, no2);
    cout << "Addition :" << result << endl;

    int result2 = substraction(no1, no2);
    cout << "Substraction :" << result2 << endl;

    int result3 = multiplication(no1, no2);
    cout << "multiplication :" << result3 << endl;

    int result4 = division(no1, no2);
    cout << "division :" << result4 << endl;

    return EXIT_SUCCESS;
}
