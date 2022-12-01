// Using C++ classes implement a Simple Interest Calculator
#include <iostream>
#include <cassert>

using namespace std;

class simple_interest
{
public:
    simple_interest(int a = 0, int b = 0, int c = 0) : Principle(a), Tenure(b), Rate(c) {}

    double calculate_interest()
    {
        if (Principle < 0 || Rate < 0 || Tenure < 0)
        {
            cout << "Input can't be a negative value\n";
            exit(1);
        }
        interest = (Principle * Tenure * Rate) * 0.01;
        return interest;
    }

private:
    double Principle;
    double Tenure;
    double Rate;
    double interest;
};

int main()
{
    simple_interest cal(2, 3, 4);
    cal.calculate_interest();
    cout << "interest :" << cal.calculate_interest() << endl;
    assert(cal.calculate_interest() == 0.24);
    assert(cal.calculate_interest() == 0.26);

    return EXIT_SUCCESS;
}
