#include <iostream>
#include <limits.h>

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
    if ((num1 > 0 && num2 < 0) && result <0)
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

    if ((num1 > 0 && num2 > 0) && result <INT_MAX)
    {
        cout << "Integer in Overflow" << endl;
    }
    if (((num1 > 0 && num2 < 0)||(num1<0 && num2>0)) && result >INT_MIN)
    {
        cout << "Integer in underflow" << endl;
    }

    return result;
}
int main()
{
    cout << INT_MAX << endl;
    int no1, no2;
    cin >> no1 >> no2;
    if (cin.fail())
    {
        cout << "check given interger are not in range" << endl;
        
    }
    int result=addition(no1,no2);
    cout<<"Addition :"<<result<<endl;

    int result2=substraction(no1,no2);
    cout<<"Substraction :"<<result2<<endl;

    int result3=multiplication(no1,no2);
    cout<<"multiplication :"<<result3<<endl;

}