// Implement UNIX command echo in C++
#include <iostream>
#include<cassert>

using namespace std;

int main(int argc, char *argv[])
{
    cout << argc << endl;

    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << " ";
    }
    cout << endl;
}
