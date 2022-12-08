//Implementation of tail command
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << endl;
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            cout << "==> " << argv[1] << " <==" << endl;
            string line;
            
            list<string> mylist;
            int count = 0;

            ifstream file(argv[i]);
            if (!file)
            {
                cout << "Tail: cannot read: " << argv[i] << " : No such file or directory ";
            }
            else
            {
                while (getline(file, line))
                {
                    mylist.push_back(line);
                    if (count >= 10)
                        mylist.pop_front();
                    count++;
                }
                for (auto itr = mylist.begin(); itr != mylist.end(); ++itr)
                    cout << *itr << endl;
            }
        }
    }
}
