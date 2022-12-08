//implementing Cat Command
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        char c;
        while (true)
        {
           cin>>c;
            if (c == EOF)
                break;
            cout<<c;
        }
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            FILE *file;
            if (file = fopen(argv[i], "r"))
            {
                char c;
                while (1)
                {
                    c = getc(file);
                    if (c == EOF)
                        break;
                    cout << c;
                }
                fclose(file);
            }
            else
            {
                cout << "cat: " << argv[1] << ": No such file or directory";
            }
        }
    }
    return 0;
}
