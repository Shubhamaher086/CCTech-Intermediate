//Implementation of sort command
#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char c;
    if (argc == 1)
    {
        cout << endl;
    }
    else if (argc > 1)
    {
        string line;
        
        list<string> lines;
        int count = 0;
        for (int i = 1; i < argc; i++)
        {
            ifstream file(argv[i]);
            if (!file)
            {
                cout << "can't done sorting : " << argv[i] << " : No such file or directory ";
                count++;
                break;
            }
            else
            {
                while (getline(file, line))
                {
                    lines.push_back(line);
                }
            }
        }
        if (count == 0)
        {  
            lines.sort();
            for (auto itr = lines.begin(); itr != lines.end(); ++itr)
                cout << *itr << endl;
        }
    }
}
