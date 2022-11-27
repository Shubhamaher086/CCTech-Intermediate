//Find the square root of a number and handle the invalid inputs using exception handling.
#include <iostream>
#include <cmath>

using namespace std;
void squareRoot(float num)
{
    if (num <= 0)
    {
        throw invalid_argument("enter number greater than 0");
    }
    else
    {
        float root = sqrt(num);
        cout << "Square root of " << num << " is " << root << endl;
    }
}

int main()
{
    try
    {
        float number, root;
        cout << "Enter number whose root is to be found: ";
        cin >> number;
        squareRoot(number);
    }
    catch (exception e)
    {
        cout << "enter number greater than 0" << endl;
    }
    return 0;
}