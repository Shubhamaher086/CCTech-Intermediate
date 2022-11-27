//Using C++ classes implement a Simple Interest Calculator 
#include <iostream>
#include <cassert>

using namespace std;

class simple_intrest
{
public:
    simple_intrest(int a = 0, int b = 0, int c = 0) : principle(a), tenure(b), rate(c) {}

    double calculate_intrest()
    {
        intrest = (principle * tenure * rate) * 0.01;
        return intrest;
    }

private:
    unsigned int principle;
    unsigned int tenure;
    unsigned int rate;
    double intrest;
};

int main()
{
    simple_intrest cal(2, 3, 4);
    cal.calculate_intrest();
    cout << "interest :" << cal.calculate_intrest() << endl;
    assert(cal.calculate_intrest()==0.24);
    //assert(cal.calculate_intrest()==0.26);


    return 0;
}
