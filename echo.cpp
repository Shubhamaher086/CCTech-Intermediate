//Implement UNIX command echo in C++ 

#include<iostream>
using namespace std;

int main(int argc,char*argv[])
{

    for(int i=1;i<argc;i++)
    {
        cout<<argv[i]<<" ";
    }

    return EXIT_SUCCESS;
}