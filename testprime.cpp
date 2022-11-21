//Check if the given number is a Prime number. Follow the TDD approach.

#include <iostream>
#include<assert.h>
using namespace std;

bool isprimeno(int n)
{

    if (n<0 ||n == 0 || n == 1)
    {
        return false;
    }

    
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
            
        }
    }
    return true;
}
int main()
{

    assert(isprimeno(-1));
    assert(isprimeno(0));
    assert(isprimeno(1));
    assert(isprimeno(2));
    assert(!isprimeno(5));
    assert(isprimeno(10));
}